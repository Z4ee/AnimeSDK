#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_0_16E4307DCC419505_345;
namespace RPG::Client { class IAvatarSkinData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11225B70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11225BA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54_INVOKE_OFFSET UNITYSDK_OFFSET(0x11225610)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE54__CTOR_OFFSET UNITYSDK_OFFSET(0x11213040)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE54_TypeDefinitionIndex = 46380;

	class InternalGlobals___GEN_DELEGATE54 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IAvatarSkinData* Invoke(::Class_0_16E4307DCC419505_345* ability)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_INVOKE_OFFSET))(this, ability);
		}

		::System::IAsyncResult* BeginInvoke(::Class_0_16E4307DCC419505_345* ability, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_0_16E4307DCC419505_345*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_BEGININVOKE_OFFSET))(this, ability, callback, object);
		}

		::RPG::Client::IAvatarSkinData* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE54_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
