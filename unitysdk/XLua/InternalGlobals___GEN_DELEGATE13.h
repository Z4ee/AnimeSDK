#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF4D300)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF4D330)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF4CDA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE13__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49AF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE13_TypeDefinitionIndex = 40430;

	class InternalGlobals___GEN_DELEGATE13 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::RogueTournAreaGroupData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::RogueTournAreaGroupData* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::RogueTournAreaGroupData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE13_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
