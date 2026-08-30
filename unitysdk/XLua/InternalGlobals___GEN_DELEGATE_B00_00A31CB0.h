#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_46FD925988407D1E;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B1FE90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B1FF30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B1FE70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B1FDF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_00A31CB0_TypeDefinitionIndex = 50499;

	class InternalGlobals___GEN_DELEGATE_B00_00A31CB0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::Class_2_46FD925988407D1E* a1, ::RPG::GameCore::CakeRaceProperty a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_46FD925988407D1E*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_46FD925988407D1E* a1, ::RPG::GameCore::CakeRaceProperty a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_46FD925988407D1E*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00A31CB0_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
