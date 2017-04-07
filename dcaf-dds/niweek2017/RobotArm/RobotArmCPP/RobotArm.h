

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RobotArm.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RobotArm_485900963_h
#define RobotArm_485900963_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *RobotArmCommandTYPENAME;

}

struct RobotArmCommandSeq;
#ifndef NDDS_STANDALONE_TYPE
class RobotArmCommandTypeSupport;
class RobotArmCommandDataWriter;
class RobotArmCommandDataReader;
#endif

class RobotArmCommand 
{
  public:
    typedef struct RobotArmCommandSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RobotArmCommandTypeSupport TypeSupport;
    typedef RobotArmCommandDataWriter DataWriter;
    typedef RobotArmCommandDataReader DataReader;
    #endif

    DDS_Long   value ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* RobotArmCommand_get_typecode(void); /* Type code */

DDS_SEQUENCE(RobotArmCommandSeq, RobotArmCommand);                                        

NDDSUSERDllExport
RTIBool RobotArmCommand_initialize(
    RobotArmCommand* self);

NDDSUSERDllExport
RTIBool RobotArmCommand_initialize_ex(
    RobotArmCommand* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RobotArmCommand_initialize_w_params(
    RobotArmCommand* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void RobotArmCommand_finalize(
    RobotArmCommand* self);

NDDSUSERDllExport
void RobotArmCommand_finalize_ex(
    RobotArmCommand* self,RTIBool deletePointers);

NDDSUSERDllExport
void RobotArmCommand_finalize_w_params(
    RobotArmCommand* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RobotArmCommand_finalize_optional_members(
    RobotArmCommand* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RobotArmCommand_copy(
    RobotArmCommand* dst,
    const RobotArmCommand* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* RobotArm */

