#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Security/AccessControl/SecurityInfos.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1AF8F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1AFA00)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1AF440)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AF420)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity_GetSecurityInfoNativeCall_TypeDefinitionIndex = 989;

	class NativeObjectSecurity_GetSecurityInfoNativeCall : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::Security::AccessControl::SecurityInfos securityInfos, ::System::IntPtr& owner, ::System::IntPtr& group, ::System::IntPtr& dacl, ::System::IntPtr& sacl, ::System::IntPtr& descriptor)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::SecurityInfos, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL_INVOKE_OFFSET))(this, securityInfos, owner, group, dacl, sacl, descriptor);
		}

		::System::IAsyncResult* BeginInvoke(::System::Security::AccessControl::SecurityInfos securityInfos, ::System::IntPtr& owner, ::System::IntPtr& group, ::System::IntPtr& dacl, ::System::IntPtr& sacl, ::System::IntPtr& descriptor, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::AccessControl::SecurityInfos, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL_BEGININVOKE_OFFSET))(this, securityInfos, owner, group, dacl, sacl, descriptor, callback, object);
		}

		::System::Int32 EndInvoke(::System::IntPtr& owner, ::System::IntPtr& group, ::System::IntPtr& dacl, ::System::IntPtr& sacl, ::System::IntPtr& descriptor, ::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_GETSECURITYINFONATIVECALL_ENDINVOKE_OFFSET))(this, owner, group, dacl, sacl, descriptor, result);
		}
	};
}
