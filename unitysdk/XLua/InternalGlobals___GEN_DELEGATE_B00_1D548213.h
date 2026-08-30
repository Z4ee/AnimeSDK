#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Numerics/BigInteger.h"

class Class_1_075C34D03AFA1215_81;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B740)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B770)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1B720)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1B6B0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_1D548213_TypeDefinitionIndex = 50469;

	class InternalGlobals___GEN_DELEGATE_B00_1D548213 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Numerics::BigInteger Invoke(::Class_1_075C34D03AFA1215_81* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_075C34D03AFA1215_81*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_075C34D03AFA1215_81* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_075C34D03AFA1215_81*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::BigInteger EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_1D548213_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
