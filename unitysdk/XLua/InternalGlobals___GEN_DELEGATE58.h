#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Numerics/BigInteger.h"

class Class_1_075C34D03AFA1215_80;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE800)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE830)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BDE7E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE58__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDE770)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE58_TypeDefinitionIndex = 47939;

	class InternalGlobals___GEN_DELEGATE58 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Numerics::BigInteger Invoke(::Class_1_075C34D03AFA1215_80* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_075C34D03AFA1215_80* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_075C34D03AFA1215_80*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::BigInteger EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE58_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
