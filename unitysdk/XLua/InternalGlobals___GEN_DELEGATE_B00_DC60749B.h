#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracleInGame; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11857480)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11857500)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B_INVOKE_OFFSET UNITYSDK_OFFSET(0x11857460)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B__CTOR_OFFSET UNITYSDK_OFFSET(0x11857370)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_DC60749B_TypeDefinitionIndex = 50478;

	class InternalGlobals___GEN_DELEGATE_B00_DC60749B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* Invoke(::RPG::Client::IRogueMiracleInfo* a1, ::RPG::GameCore::RogueMiracleCategory a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracleInfo* a1, ::RPG::GameCore::RogueMiracleCategory a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::RPG::GameCore::RogueMiracleCategory, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracleInGame*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DC60749B_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
