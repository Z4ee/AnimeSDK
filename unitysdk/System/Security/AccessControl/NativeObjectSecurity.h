#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlSections.h"
#include "unitysdk/System/Security/AccessControl/CommonObjectSecurity.h"
#include "unitysdk/System/Security/AccessControl/ResourceType.h"
#include "unitysdk/System/Security/AccessControl/SecurityInfos.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::InteropServices { class SafeHandle; }
namespace System::Security::AccessControl { class NativeObjectSecurity_ExceptionFromErrorCode; }
namespace System::Security::AccessControl { class NativeObjectSecurity_GetSecurityInfoNativeCall; }
namespace System::Security::AccessControl { class NativeObjectSecurity_SetSecurityInfoNativeCall; }

#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_CLEARACCESSCONTROLSECTIONSMODIFIED_OFFSET UNITYSDK_OFFSET(0x1A7CA810)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_DEFAULTEXCEPTIONFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x1A7CAA50)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETNAMEDSECURITYINFO_OFFSET UNITYSDK_OFFSET(0x1A7CBE00)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYDESCRIPTORLENGTH_OFFSET UNITYSDK_OFFSET(0x1A7CB6E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFO_OFFSET UNITYSDK_OFFSET(0x1A7CBCE0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_INTERNALGET_1_OFFSET UNITYSDK_OFFSET(0x1A7CB160)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_INTERNALGET_OFFSET UNITYSDK_OFFSET(0x1A7CAE00)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_INTERNALSET_OFFSET UNITYSDK_OFFSET(0x1A7CB200)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_ISVALIDSECURITYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7CB660)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_LOCALFREE_OFFSET UNITYSDK_OFFSET(0x1A7CB760)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_PERSIST_OFFSET UNITYSDK_OFFSET(0x1A7CA8D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_RAISEEXCEPTIONONFAILURE_OFFSET UNITYSDK_OFFSET(0x1A7CA760)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFO_OFFSET UNITYSDK_OFFSET(0x1A7CBEF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_WIN32FIXNAME_OFFSET UNITYSDK_OFFSET(0x1A7CBC30)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_WIN32GETHELPER_OFFSET UNITYSDK_OFFSET(0x1A7CAEA0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_WIN32SETHELPER_OFFSET UNITYSDK_OFFSET(0x1A7CB2B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7CA3B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7CA3E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A7CA5A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A7CA400)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A7CA5C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA380)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity_TypeDefinitionIndex = 988;

	class NativeObjectSecurity : public ::System::Security::AccessControl::CommonObjectSecurity
	{
	public:
		::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exception_from_error_code; // 0x28
		::System::Security::AccessControl::ResourceType resource_type; // 0x30

		::System::Void _ctor(::System::Boolean isContainer, ::System::Security::AccessControl::ResourceType resourceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Security::AccessControl::ResourceType))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_OFFSET))(this, isContainer, resourceType);
		}

		::System::Void _ctor_1(::System::Boolean isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_1_OFFSET))(this, isContainer, resourceType, exceptionFromErrorCode, exceptionContext);
		}

		::System::Void _ctor_2(::System::Boolean isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Security::AccessControl::ResourceType, ::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_2_OFFSET))(this, isContainer, resourceType, handle, includeSections);
		}

		::System::Void _ctor_3(::System::Boolean isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::String* name, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Security::AccessControl::ResourceType, ::System::String*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_3_OFFSET))(this, isContainer, resourceType, name, includeSections);
		}

		::System::Void _ctor_4(::System::Boolean isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::AccessControlSections includeSections, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Security::AccessControl::ResourceType, ::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::AccessControlSections, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_4_OFFSET))(this, isContainer, resourceType, handle, includeSections, exceptionFromErrorCode, exceptionContext);
		}

		::System::Void _ctor_5(::System::Boolean isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::System::String* name, ::System::Security::AccessControl::AccessControlSections includeSections, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Security::AccessControl::ResourceType, ::System::String*, ::System::Security::AccessControl::AccessControlSections, ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY__CTOR_5_OFFSET))(this, isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext);
		}

		::System::Void ClearAccessControlSectionsModified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_CLEARACCESSCONTROLSECTIONSMODIFIED_OFFSET))(this);
		}

		::System::Void Persist(::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::AccessControlSections includeSections, ::System::Object* exceptionContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::AccessControlSections, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_PERSIST_OFFSET))(this, handle, includeSections, exceptionContext);
		}

		static ::System::Exception* DefaultExceptionFromErrorCode(::System::Int32 errorCode, ::System::String* name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::String*, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_DEFAULTEXCEPTIONFROMERRORCODE_OFFSET))(errorCode, name, handle, context);
		}

		::System::Void RaiseExceptionOnFailure(::System::Int32 errorCode, ::System::String* name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_RAISEEXCEPTIONONFAILURE_OFFSET))(this, errorCode, name, handle, context);
		}

		::System::Int32 InternalGet(::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_INTERNALGET_OFFSET))(this, handle, includeSections);
		}

		::System::Int32 InternalGet_1(::System::String* name, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_INTERNALGET_1_OFFSET))(this, name, includeSections);
		}

		::System::Int32 InternalSet(::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_INTERNALSET_OFFSET))(this, handle, includeSections);
		}

		::System::Int32 Win32GetHelper(::System::Security::AccessControl::NativeObjectSecurity_GetSecurityInfoNativeCall* nativeCall, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::NativeObjectSecurity_GetSecurityInfoNativeCall*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_WIN32GETHELPER_OFFSET))(this, nativeCall, includeSections);
		}

		::System::Int32 Win32SetHelper(::System::Security::AccessControl::NativeObjectSecurity_SetSecurityInfoNativeCall* nativeCall, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::NativeObjectSecurity_SetSecurityInfoNativeCall*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_WIN32SETHELPER_OFFSET))(this, nativeCall, includeSections);
		}

		::System::String* Win32FixName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_WIN32FIXNAME_OFFSET))(this, name);
		}

		static ::System::Int32 GetSecurityInfo(::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::ResourceType resourceType, ::System::Security::AccessControl::SecurityInfos securityInfos, ::System::IntPtr& owner, ::System::IntPtr& group, ::System::IntPtr& dacl, ::System::IntPtr& sacl, ::System::IntPtr& descriptor)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::SecurityInfos, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFO_OFFSET))(handle, resourceType, securityInfos, owner, group, dacl, sacl, descriptor);
		}

		static ::System::Int32 GetNamedSecurityInfo(::System::String* name, ::System::Security::AccessControl::ResourceType resourceType, ::System::Security::AccessControl::SecurityInfos securityInfos, ::System::IntPtr& owner, ::System::IntPtr& group, ::System::IntPtr& dacl, ::System::IntPtr& sacl, ::System::IntPtr& descriptor)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::SecurityInfos, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETNAMEDSECURITYINFO_OFFSET))(name, resourceType, securityInfos, owner, group, dacl, sacl, descriptor);
		}

		static ::System::IntPtr LocalFree(::System::IntPtr handle)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_LOCALFREE_OFFSET))(handle);
		}

		static ::System::Int32 SetSecurityInfo(::System::Runtime::InteropServices::SafeHandle* handle, ::System::Security::AccessControl::ResourceType resourceType, ::System::Security::AccessControl::SecurityInfos securityInfos, ::Il2CppArray<::System::Byte>* owner, ::Il2CppArray<::System::Byte>* group, ::Il2CppArray<::System::Byte>* dacl, ::Il2CppArray<::System::Byte>* sacl)
		{
			return ((::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::SecurityInfos, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFO_OFFSET))(handle, resourceType, securityInfos, owner, group, dacl, sacl);
		}

		static ::System::Int32 GetSecurityDescriptorLength(::System::IntPtr descriptor)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYDESCRIPTORLENGTH_OFFSET))(descriptor);
		}

		static ::System::Boolean IsValidSecurityDescriptor(::System::IntPtr descriptor)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_ISVALIDSECURITYDESCRIPTOR_OFFSET))(descriptor);
		}
	};
}
