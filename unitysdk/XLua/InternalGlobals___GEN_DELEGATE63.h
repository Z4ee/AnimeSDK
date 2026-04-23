#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::LittleGame { class LittleGameRuntimeButton; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11229640)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11229670)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63_INVOKE_OFFSET UNITYSDK_OFFSET(0x112290E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE63__CTOR_OFFSET UNITYSDK_OFFSET(0x112132E0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE63_TypeDefinitionIndex = 46389;

	class InternalGlobals___GEN_DELEGATE63 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* Invoke(::RPG::GameCore::PropButtonConfig* buttonConfig)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63_INVOKE_OFFSET))(this, buttonConfig);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::PropButtonConfig* buttonConfig, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::PropButtonConfig*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63_BEGININVOKE_OFFSET))(this, buttonConfig, callback, object);
		}

		::RPG::Client::LittleGame::LittleGameRuntimeButton* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::LittleGame::LittleGameRuntimeButton*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE63_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
