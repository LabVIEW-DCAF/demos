

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotArm.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RobotArmPlugin_485900963_h
#define RobotArmPlugin_485900963_h

#include "RobotArm.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define RobotArmCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define RobotArmCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RobotArmCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define RobotArmCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RobotArmCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RobotArmCommand*
    RobotArmCommandPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RobotArmCommand*
    RobotArmCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RobotArmCommand*
    RobotArmCommandPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPluginSupport_copy_data(
        RobotArmCommand *out,
        const RobotArmCommand *in);

    NDDSUSERDllExport extern void 
    RobotArmCommandPluginSupport_destroy_data_w_params(
        RobotArmCommand *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RobotArmCommandPluginSupport_destroy_data_ex(
        RobotArmCommand *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RobotArmCommandPluginSupport_destroy_data(
        RobotArmCommand *sample);

    NDDSUSERDllExport extern void 
    RobotArmCommandPluginSupport_print_data(
        const RobotArmCommand *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RobotArmCommandPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RobotArmCommandPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RobotArmCommandPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RobotArmCommandPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RobotArmCommandPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand *out,
        const RobotArmCommand *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const RobotArmCommand *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RobotArmCommandPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    RobotArmCommandPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RobotArmCommandPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    RobotArmCommandPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const RobotArmCommand * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RobotArmCommandPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RobotArmCommandPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const RobotArmCommand *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RobotArmCommandPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RobotArmCommandPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        RobotArmCommand *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RobotArmCommandPlugin_new(void);

    NDDSUSERDllExport extern void
    RobotArmCommandPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RobotArmPlugin_485900963_h */

