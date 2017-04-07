

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotArm.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "RobotArm.h"

/* ========================================================================= */
const char *RobotArmCommandTYPENAME = "RobotArmCommand";

DDS_TypeCode* RobotArmCommand_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RobotArmCommand_g_tc_members[1]=
    {

        {
            (char *)"value",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode RobotArmCommand_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RobotArmCommand", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            RobotArmCommand_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for RobotArmCommand*/

    if (is_initialized) {
        return &RobotArmCommand_g_tc;
    }

    RobotArmCommand_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &RobotArmCommand_g_tc;
}

RTIBool RobotArmCommand_initialize(
    RobotArmCommand* sample) {
    return RobotArmCommand_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RobotArmCommand_initialize_ex(
    RobotArmCommand* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RobotArmCommand_initialize_w_params(
        sample,&allocParams);

}

RTIBool RobotArmCommand_initialize_w_params(
    RobotArmCommand* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLong(&sample->value)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void RobotArmCommand_finalize(
    RobotArmCommand* sample)
{

    RobotArmCommand_finalize_ex(sample,RTI_TRUE);
}

void RobotArmCommand_finalize_ex(
    RobotArmCommand* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RobotArmCommand_finalize_w_params(
        sample,&deallocParams);
}

void RobotArmCommand_finalize_w_params(
    RobotArmCommand* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample) {} /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

}

void RobotArmCommand_finalize_optional_members(
    RobotArmCommand* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RobotArmCommand_copy(
    RobotArmCommand* dst,
    const RobotArmCommand* src)
{

    if (!RTICdrType_copyLong (
        &dst->value, &src->value)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RobotArmCommand' sequence class.
*/
#define T RobotArmCommand
#define TSeq RobotArmCommandSeq
#define T_initialize_w_params RobotArmCommand_initialize_w_params
#define T_finalize_w_params   RobotArmCommand_finalize_w_params
#define T_copy       RobotArmCommand_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

