#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1776DFB0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__COPYFROM_B__162_0_OFFSET UNITYSDK_OFFSET(0x1776E080)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1776DFF0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_INDEXCOUNT_B__122_0_OFFSET UNITYSDK_OFFSET(0x1776E020)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_TRIANGLECOUNT_B__124_0_OFFSET UNITYSDK_OFFSET(0x1776E050)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_0_OFFSET UNITYSDK_OFFSET(0x1776E000)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_1_OFFSET UNITYSDK_OFFSET(0x1776E010)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh___c_TypeDefinitionIndex = 41604;

	class ProBuilderMesh___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>** StaticGet___9__114_1()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x54400);
		}
		static ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>** StaticGet___9__114_0()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x54408);
		}
		static ::UnityEngine::ProBuilder::ProBuilderMesh___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::ProBuilderMesh___c**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x54410);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x54418);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__162_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x54420);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__122_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x54428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _SetUVs_b__114_0(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _SetUVs_b__114_1(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_1_OFFSET))(this, a1);
		}

		::System::Int32 _get_indexCount_b__122_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_INDEXCOUNT_B__122_0_OFFSET))(this, a1);
		}

		::System::Int32 _get_triangleCount_b__124_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_TRIANGLECOUNT_B__124_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _CopyFrom_b__162_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__COPYFROM_B__162_0_OFFSET))(this, a1);
		}
	};
}
