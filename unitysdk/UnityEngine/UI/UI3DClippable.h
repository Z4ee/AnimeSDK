#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_UI3DCLIPPABLE_CULL_OFFSET UNITYSDK_OFFSET(0xAC32DD0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0xAC32C90)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xAC32CE0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_A8F5229F397DA4EA_OFFSET UNITYSDK_OFFSET(0xAC33130)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_F437BF67AC1F1345_OFFSET UNITYSDK_OFFSET(0xAC32E00)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAC32DA0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAC32CC0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xAC32DE0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xAC32DC0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xAC33430)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xAC337D0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xAC33B30)
#define UNITYENGINE_UI_UI3DCLIPPABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC33AE0)
#define UNITYENGINE_UI_UI3DCLIPPABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC33AA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UI3DClippable_TypeDefinitionIndex = 38612;

	class UI3DClippable : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_7_5()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x5B30);
		}
		static ::System::Int32* StaticGet_Field_7_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x3820);
		}
		static ::System::Int32* StaticGet_Field_7_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x3824);
		}
		::Il2CppArray<::UnityEngine::MeshRenderer*>* _MeshRenderers; // 0xA0
		::UnityEngine::Camera* Field_7_1; // 0xA8
		::UnityEngine::UI::RectMask2D* Field_7_2; // 0xB0
		::UnityEngine::Vector4 Field_7_3; // 0xB8
		::UnityEngine::Vector4 Field_7_4; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE__CCTOR_OFFSET))();
		}

		::UnityEngine::Camera* get_UICamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_GET_UICAMERA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void Method_7_9DE87B16AD0A605E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_9DE87B16AD0A605E_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_7_F437BF67AC1F1345(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_F437BF67AC1F1345_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_7_A8F5229F397DA4EA(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_A8F5229F397DA4EA_OFFSET))(this, a1);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPRECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPSOFTNESS_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET))(this);
		}
	};
}
