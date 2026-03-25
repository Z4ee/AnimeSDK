#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1887C960)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__COPYFROM_B__162_0_OFFSET UNITYSDK_OFFSET(0x1887CA30)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1887C9A0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_INDEXCOUNT_B__122_0_OFFSET UNITYSDK_OFFSET(0x1887C9D0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_TRIANGLECOUNT_B__124_0_OFFSET UNITYSDK_OFFSET(0x1887CA00)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_0_OFFSET UNITYSDK_OFFSET(0x1887C9B0)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_1_OFFSET UNITYSDK_OFFSET(0x1887C9C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh___c_TypeDefinitionIndex = 34143;

	class ProBuilderMesh___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>** StaticGet___9__114_1()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x294F0);
		}
		static ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>** StaticGet___9__114_0()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x294F8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__162_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x29500);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__122_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x29508);
		}
		static ::UnityEngine::ProBuilder::ProBuilderMesh___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::ProBuilderMesh___c**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x29510);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ProBuilderMesh___c_TypeDefinitionIndex)->GetStaticField(0x29518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _SetUVs_b__114_0(::UnityEngine::Vector4 x)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_0_OFFSET))(this, x);
		}

		::UnityEngine::Vector2 _SetUVs_b__114_1(::UnityEngine::Vector4 x)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__SETUVS_B__114_1_OFFSET))(this, x);
		}

		::System::Int32 _get_indexCount_b__122_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_INDEXCOUNT_B__122_0_OFFSET))(this, x);
		}

		::System::Int32 _get_triangleCount_b__124_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__GET_TRIANGLECOUNT_B__124_0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Face* _CopyFrom_b__162_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__COPYFROM_B__162_0_OFFSET))(this, x);
		}
	};
}
