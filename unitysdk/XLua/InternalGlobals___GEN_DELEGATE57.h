#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Numerics/BigInteger.h"

class Class_1_075C34D03AFA1215_80;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11226EA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11226ED0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57_INVOKE_OFFSET UNITYSDK_OFFSET(0x11226910)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE57__CTOR_OFFSET UNITYSDK_OFFSET(0x11213220)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE57_TypeDefinitionIndex = 46383;

	class InternalGlobals___GEN_DELEGATE57 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57__CTOR_OFFSET))(this, object, method);
		}

		::System::Numerics::BigInteger Invoke(::Class_1_075C34D03AFA1215_80* bigUint)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57_INVOKE_OFFSET))(this, bigUint);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_075C34D03AFA1215_80* bigUint, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57_BEGININVOKE_OFFSET))(this, bigUint, callback, object);
		}

		::System::Numerics::BigInteger EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE57_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
