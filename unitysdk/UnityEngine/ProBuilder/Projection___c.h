#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_PROBUILDER_PROJECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2BB940)
#define UNITYENGINE_PROBUILDER_PROJECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2BB980)
#define UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A2BB990)
#define UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1A2BB9B0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Projection___c_TypeDefinitionIndex = 39969;

	class Projection___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Projection___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::Projection___c**)Il2CppClass::FromTypeDefinitionIndex(Projection___c_TypeDefinitionIndex)->GetStaticField(0x29CE0);
		}
		static ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Projection___c_TypeDefinitionIndex)->GetStaticField(0x29CE8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Projection___c_TypeDefinitionIndex)->GetStaticField(0x29CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Sort_b__6_0(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2> a, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2> b)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_0_OFFSET))(this, a, b);
		}

		::UnityEngine::Vector2 _Sort_b__6_1(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2> x)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Single, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION___C__SORT_B__6_1_OFFSET))(this, x);
		}
	};
}
