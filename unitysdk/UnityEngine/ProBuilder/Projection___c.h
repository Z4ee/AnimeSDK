#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_PROBUILDER_PROJECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB99010)
#define UNITYENGINE_PROBUILDER_PROJECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB99050)
#define UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1EB99060)
#define UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1EB99080)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Projection___c_TypeDefinitionIndex = 43222;

	class Projection___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Projection___c_TypeDefinitionIndex)->GetStaticField(0x5F7E0);
		}
		static ::UnityEngine::ProBuilder::Projection___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::Projection___c**)Il2CppClass::FromTypeDefinitionIndex(Projection___c_TypeDefinitionIndex)->GetStaticField(0x5F7E8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Projection___c_TypeDefinitionIndex)->GetStaticField(0x5F7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Sort_b__6_0(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2> a1, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 _Sort_b__6_1(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2> a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_1_OFFSET))(this, a1);
		}
	};
}
