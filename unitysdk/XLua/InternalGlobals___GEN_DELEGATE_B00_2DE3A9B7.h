#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::LittleGame { class LittleGameRuntimeButton; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B21210)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B21240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B21200)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21110)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_2DE3A9B7_TypeDefinitionIndex = 50523;

	class InternalGlobals___GEN_DELEGATE_B00_2DE3A9B7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* Invoke(::RPG::GameCore::PropButtonConfig* a1)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::PropButtonConfig* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_2DE3A9B7_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
