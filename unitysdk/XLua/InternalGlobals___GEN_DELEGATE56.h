#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_15E317187C4E8254;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5D710)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5D740)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5D1B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE56__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A050)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE56_TypeDefinitionIndex = 40473;

	class InternalGlobals___GEN_DELEGATE56 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::Class_2_15E317187C4E8254* entity)
		{
			return ((::System::Single(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56_INVOKE_OFFSET))(this, entity);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_15E317187C4E8254* entity, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56_BEGININVOKE_OFFSET))(this, entity, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE56_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
