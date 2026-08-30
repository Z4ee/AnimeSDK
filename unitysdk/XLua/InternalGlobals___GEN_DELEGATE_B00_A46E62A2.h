#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_46FD925988407D1E;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1DCB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1DCE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1DCA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1DC30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_A46E62A2_TypeDefinitionIndex = 50501;

	class InternalGlobals___GEN_DELEGATE_B00_A46E62A2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::Class_2_46FD925988407D1E* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Class_2_46FD925988407D1E*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_46FD925988407D1E* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_46FD925988407D1E*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A46E62A2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
