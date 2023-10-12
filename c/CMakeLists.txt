cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "one_msg_waba_sdk")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/ack.c
    model/add_template_request.c
    model/channel_extended_statistics.c
    model/channel_extended_statistics_inner.c
    model/channel_statistics.c
    model/channel_status.c
    model/chat_id_prop.c
    model/commerce.c
    model/commerce_params.c
    model/contacts.c
    model/contacts_contacts_inner.c
    model/contacts_request.c
    model/get_ack_info.c
    model/get_ack_info_hooks_inner.c
    model/get_commerce.c
    model/get_commerce_inner.c
    model/get_ip.c
    model/get_me.c
    model/get_me_401_response.c
    model/get_messages.c
    model/get_messages_messages_inner.c
    model/get_templates.c
    model/get_templates_templates_inner.c
    model/me_components.c
    model/media_id.c
    model/message.c
    model/message_id_prop.c
    model/phone_prop.c
    model/read_message_request.c
    model/remove_template_request.c
    model/send_contact_request.c
    model/send_file_request.c
    model/send_list_request.c
    model/send_list_request_all_of_rows.c
    model/send_list_request_all_of_sections.c
    model/send_location_request.c
    model/send_message_request.c
    model/send_message_status.c
    model/send_product_request.c
    model/send_product_request_all_of_action.c
    model/send_product_request_all_of_action_product_items.c
    model/send_product_request_all_of_action_sections.c
    model/send_template_request.c
    model/send_template_request_all_of_currency.c
    model/send_template_request_all_of_date_time.c
    model/send_template_request_all_of_date_time_component.c
    model/send_template_request_all_of_date_time_unix_epoch.c
    model/send_template_request_all_of_language.c
    model/send_template_request_all_of_params.c
    model/set_commerce.c
    model/set_me.c
    model/set_me_request.c
    model/set_settings_200_response.c
    model/set_settings_200_response_all_of_update.c
    model/set_webhook_status.c
    model/settings.c
    model/template_category_prop.c
    model/template_components_prop.c
    model/template_components_prop_inner.c
    model/template_components_prop_inner_buttons_inner.c
    model/template_language_prop.c
    model/template_namespace_field.c
    model/upload_media.c
    model/webhook_url.c
    api/ChannelAPI.c
    api/MediaAPI.c
    api/MessagingAPI.c
    api/ProductsCatalogsAPI.c
    api/TemplatesAPI.c
    api/WebhooksAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/ack.h
    model/add_template_request.h
    model/channel_extended_statistics.h
    model/channel_extended_statistics_inner.h
    model/channel_statistics.h
    model/channel_status.h
    model/chat_id_prop.h
    model/commerce.h
    model/commerce_params.h
    model/contacts.h
    model/contacts_contacts_inner.h
    model/contacts_request.h
    model/get_ack_info.h
    model/get_ack_info_hooks_inner.h
    model/get_commerce.h
    model/get_commerce_inner.h
    model/get_ip.h
    model/get_me.h
    model/get_me_401_response.h
    model/get_messages.h
    model/get_messages_messages_inner.h
    model/get_templates.h
    model/get_templates_templates_inner.h
    model/me_components.h
    model/media_id.h
    model/message.h
    model/message_id_prop.h
    model/phone_prop.h
    model/read_message_request.h
    model/remove_template_request.h
    model/send_contact_request.h
    model/send_file_request.h
    model/send_list_request.h
    model/send_list_request_all_of_rows.h
    model/send_list_request_all_of_sections.h
    model/send_location_request.h
    model/send_message_request.h
    model/send_message_status.h
    model/send_product_request.h
    model/send_product_request_all_of_action.h
    model/send_product_request_all_of_action_product_items.h
    model/send_product_request_all_of_action_sections.h
    model/send_template_request.h
    model/send_template_request_all_of_currency.h
    model/send_template_request_all_of_date_time.h
    model/send_template_request_all_of_date_time_component.h
    model/send_template_request_all_of_date_time_unix_epoch.h
    model/send_template_request_all_of_language.h
    model/send_template_request_all_of_params.h
    model/set_commerce.h
    model/set_me.h
    model/set_me_request.h
    model/set_settings_200_response.h
    model/set_settings_200_response_all_of_update.h
    model/set_webhook_status.h
    model/settings.h
    model/template_category_prop.h
    model/template_components_prop.h
    model/template_components_prop_inner.h
    model/template_components_prop_inner_buttons_inner.h
    model/template_language_prop.h
    model/template_namespace_field.h
    model/upload_media.h
    model/webhook_url.h
    api/ChannelAPI.h
    api/MediaAPI.h
    api/MessagingAPI.h
    api/ProductsCatalogsAPI.h
    api/TemplatesAPI.h
    api/WebhooksAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-ChannelAPI.c
#    unit-tests/manual-MediaAPI.c
#    unit-tests/manual-MessagingAPI.c
#    unit-tests/manual-ProductsCatalogsAPI.c
#    unit-tests/manual-TemplatesAPI.c
#    unit-tests/manual-WebhooksAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
