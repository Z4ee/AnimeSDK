#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaDataItem; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF4C1C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF4C1F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF4BC60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE10__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49A90)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE10_TypeDefinitionIndex = 40427;

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
