#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_CLOSETOKEN_OFFSET UNITYSDK_OFFSET(0x185D0BE0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185D0B60)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DUPLICATETOKEN_OFFSET UNITYSDK_OFFSET(0x185D0AD0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_REVERTTOSELF_OFFSET UNITYSDK_OFFSET(0x185D0BD0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_SETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x185D0AE0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_UNDO_OFFSET UNITYSDK_OFFSET(0x185D0BA0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185D0450)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsImpersonationContext_TypeDefinitionIndex = 983;

	class WindowsImpersonationContext : public ::System::Object
	{
	public:
		::System::IntPtr _token; // 0x10
		::System::Boolean undo; // 0x18

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void Undo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_UNDO_OFFSET))(this);
		}

		static ::System::Boolean CloseToken(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_CLOSETOKEN_OFFSET))(a1);
		}

		static ::System::IntPtr DuplicateToken(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_DUPLICATETOKEN_OFFSET))(a1);
		}

		static ::System::Boolean SetCurrentToken(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_SETCURRENTTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean RevertToSelf()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIMPERSONATIONCONTEXT_REVERTTOSELF_OFFSET))();
		}
	};
}
