#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121A990)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121A9C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24_INVOKE_OFFSET UNITYSDK_OFFSET(0x1121A430)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE24__CTOR_OFFSET UNITYSDK_OFFSET(0x11212E20)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE24_TypeDefinitionIndex = 46350;

	class InternalGlobals___GEN_DELEGATE24 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelLinear* level)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_INVOKE_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelLinear* level, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLinear*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_BEGININVOKE_OFFSET))(this, level, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE24_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
