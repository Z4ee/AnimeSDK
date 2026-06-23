#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Security/AccessControl/SecurityInfos.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CB2C560)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CB2C610)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CB2BD00)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2B7B0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity_SetSecurityInfoNativeCall_TypeDefinitionIndex = 990;

	class NativeObjectSecurity_SetSecurityInfoNativeCall : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::Security::AccessControl::SecurityInfos securityInfos, ::Il2CppArray<::System::Byte>* owner, ::Il2CppArray<::System::Byte>* group, ::Il2CppArray<::System::Byte>* dacl, ::Il2CppArray<::System::Byte>* sacl)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::SecurityInfos, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL_INVOKE_OFFSET))(this, securityInfos, owner, group, dacl, sacl);
		}

		::System::IAsyncResult* BeginInvoke(::System::Security::AccessControl::SecurityInfos securityInfos, ::Il2CppArray<::System::Byte>* owner, ::Il2CppArray<::System::Byte>* group, ::Il2CppArray<::System::Byte>* dacl, ::Il2CppArray<::System::Byte>* sacl, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::AccessControl::SecurityInfos, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL_BEGININVOKE_OFFSET))(this, securityInfos, owner, group, dacl, sacl, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_SETSECURITYINFONATIVECALL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
