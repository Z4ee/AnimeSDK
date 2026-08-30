#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFFEB50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFEB90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__GETUVS_B__2_0_OFFSET UNITYSDK_OFFSET(0xCFFEBA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_0_OFFSET UNITYSDK_OFFSET(0xCFFEBC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_1_OFFSET UNITYSDK_OFFSET(0xCFFECB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__11_0_OFFSET UNITYSDK_OFFSET(0xCFFEE90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__9_0_OFFSET UNITYSDK_OFFSET(0xCFFEDA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__SEWUVS_B__4_1_OFFSET UNITYSDK_OFFSET(0xCFFEBB0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing___c_TypeDefinitionIndex = 43328;

	class UVEditing___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::UVEditing___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::UVEditing___c**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x642D0);
		}
		static ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x642D8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x642E0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x642E8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x642F0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x642F8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(UVEditing___c_TypeDefinitionIndex)->GetStaticField(0x64300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetUVs_b__2_0(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__GETUVS_B__2_0_OFFSET))(this, a1);
		}

		::System::Int32 _SewUVs_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__SEWUVS_B__4_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesAuto_b__8_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesAuto_b__8_1(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesBox_b__9_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__9_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesBox_b__11_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__11_0_OFFSET))(this, a1);
		}
	};
}
