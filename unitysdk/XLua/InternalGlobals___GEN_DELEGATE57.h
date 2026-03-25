#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_15E317187C4E8254;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5DCD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5DD00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5D770)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4A070)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE57_TypeDefinitionIndex = 40474;

	class InternalGlobals___GEN_DELEGATE57 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::Class_2_15E317187C4E8254* catEntity)
		{
			return ((::System::Single(*)(::PVOID, ::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57_INVOKE_OFFSET))(this, catEntity);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_15E317187C4E8254* catEntity, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_15E317187C4E8254*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57_BEGININVOKE_OFFSET))(this, catEntity, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
