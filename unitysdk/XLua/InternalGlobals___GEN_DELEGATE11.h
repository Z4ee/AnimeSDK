#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x112159B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112159E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11_INVOKE_OFFSET UNITYSDK_OFFSET(0x11215450)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE11__CTOR_OFFSET UNITYSDK_OFFSET(0x11212C60)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE11_TypeDefinitionIndex = 46337;

	class InternalGlobals___GEN_DELEGATE11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::RogueTournAreaGroupData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::RogueTournAreaGroupData* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE11_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
