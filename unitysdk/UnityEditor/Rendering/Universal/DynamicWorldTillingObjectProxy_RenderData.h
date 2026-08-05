#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1CB0F060)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA_SETTRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x1CB0EC90)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB0F240)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0EBF0)

namespace UnityEditor::Rendering::Universal
{
	inline static constexpr unsigned int DynamicWorldTillingObjectProxy_RenderData_TypeDefinitionIndex = 27099;

	class DynamicWorldTillingObjectProxy_RenderData : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_WorldTillingUvwTransformMatrix4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicWorldTillingObjectProxy_RenderData_TypeDefinitionIndex)->GetStaticField(0x7130);
		}
		static ::System::Int32* StaticGet_WorldTillingUvwTransformMatrix1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicWorldTillingObjectProxy_RenderData_TypeDefinitionIndex)->GetStaticField(0x7134);
		}
		static ::System::Int32* StaticGet_NeedWorldTillingUvwTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicWorldTillingObjectProxy_RenderData_TypeDefinitionIndex)->GetStaticField(0x7138);
		}
		static ::System::Int32* StaticGet_WorldTillingUvwTransformMatrix2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicWorldTillingObjectProxy_RenderData_TypeDefinitionIndex)->GetStaticField(0x713C);
		}
		static ::System::Int32* StaticGet_WorldTillingUvwTransformMatrix3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicWorldTillingObjectProxy_RenderData_TypeDefinitionIndex)->GetStaticField(0x7140);
		}
		::UnityEngine::Renderer* renderer; // 0x10
		::UnityEngine::Matrix4x4 transformMatrix; // 0x18
		::UnityEngine::MaterialPropertyBlock* materialPropertyBlock; // 0x58

		::System::Void _ctor(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA__CTOR_OFFSET))(this, renderer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA__CCTOR_OFFSET))();
		}

		::System::Void SetTransformMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA_SETTRANSFORMMATRIX_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RENDERDATA_RESET_OFFSET))(this);
		}
	};
}
