#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_CLOSETOKEN_OFFSET UNITYSDK_OFFSET(0x1C6ED860)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6ED7E0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DUPLICATETOKEN_OFFSET UNITYSDK_OFFSET(0x1C6ED730)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_REVERTTOSELF_OFFSET UNITYSDK_OFFSET(0x1C6ED850)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_SETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C6ED740)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_UNDO_OFFSET UNITYSDK_OFFSET(0x1C6ED820)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6ED870)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6ED6F0)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsImpersonationContext_TypeDefinitionIndex = 1028;

	class WindowsImpersonationContext : public ::System::Object
	{
	public:
		::System::Boolean undo; // 0x10
		::System::IntPtr _token; // 0x18

		::System::Void _ctor(::System::IntPtr token)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT__CTOR_OFFSET))(this, token);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT__CTOR_1_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Undo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_UNDO_OFFSET))(this);
		}

		static ::System::Boolean CloseToken(::System::IntPtr token)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_CLOSETOKEN_OFFSET))(token);
		}

		static ::System::IntPtr DuplicateToken(::System::IntPtr token)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DUPLICATETOKEN_OFFSET))(token);
		}

		static ::System::Boolean SetCurrentToken(::System::IntPtr token)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_SETCURRENTTOKEN_OFFSET))(token);
		}

		static ::System::Boolean RevertToSelf()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_REVERTTOSELF_OFFSET))();
		}
	};
}
