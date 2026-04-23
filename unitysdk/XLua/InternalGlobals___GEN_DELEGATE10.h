#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaDataItem; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x112153F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11215420)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10_INVOKE_OFFSET UNITYSDK_OFFSET(0x11214E90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10__CTOR_OFFSET UNITYSDK_OFFSET(0x11212C40)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE10_TypeDefinitionIndex = 46336;

	class InternalGlobals___GEN_DELEGATE10 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE10__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::RogueTournAreaDataItem* area)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE10_INVOKE_OFFSET))(this, area);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::RogueTournAreaDataItem* area, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE10_BEGININVOKE_OFFSET))(this, area, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE10_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
