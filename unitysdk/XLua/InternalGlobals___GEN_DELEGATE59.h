#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::LittleGame { class LittleGameRuntimeButton; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5E640)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5E670)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5E0E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE59__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A0B0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE59_TypeDefinitionIndex = 40476;

	class InternalGlobals___GEN_DELEGATE59 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* Invoke(::RPG::GameCore::PropButtonConfig* buttonConfig)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59_INVOKE_OFFSET))(this, buttonConfig);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::PropButtonConfig* buttonConfig, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59_BEGININVOKE_OFFSET))(this, buttonConfig, callback, object);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE59_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
