#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C74A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C74E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_0_OFFSET UNITYSDK_OFFSET(0x1A1C74F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_1_OFFSET UNITYSDK_OFFSET(0x1A1C7570)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int VectorUtils___c_TypeDefinitionIndex = 28498;

	class VectorUtils___c : public ::System::Object
	{
	public:
		static ::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils___c** StaticGet___9()
		{
			return (::ToolBuddy::ThirdParty::VectorGraphics::VectorUtils___c**)Il2CppClass::FromTypeDefinitionIndex(VectorUtils___c_TypeDefinitionIndex)->GetStaticField(0x21AD0);
		}
		static ::System::Predicate_1<::System::Double>** StaticGet___9__81_0()
		{
			return (::System::Predicate_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(VectorUtils___c_TypeDefinitionIndex)->GetStaticField(0x21AD8);
		}
		static ::System::Func_2<::System::Double, ::System::Single>** StaticGet___9__81_1()
		{
			return (::System::Func_2<::System::Double, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(VectorUtils___c_TypeDefinitionIndex)->GetStaticField(0x21AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CubicRoots_b__81_0(::System::Double x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_0_OFFSET))(this, x);
		}

		::System::Single _CubicRoots_b__81_1(::System::Double x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_VECTORUTILS___C__CUBICROOTS_B__81_1_OFFSET))(this, x);
		}
	};
}
