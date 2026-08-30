#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11856BD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11856C00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825_INVOKE_OFFSET UNITYSDK_OFFSET(0x11856BC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825__CTOR_OFFSET UNITYSDK_OFFSET(0x11856AD0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_C0D1C825_TypeDefinitionIndex = 50477;

	class InternalGlobals___GEN_DELEGATE_B00_C0D1C825 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* Invoke(::RPG::Client::IRogueMiracleInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracleInfo* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_C0D1C825_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
