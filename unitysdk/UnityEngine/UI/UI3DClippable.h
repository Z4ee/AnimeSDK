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

#define UNITYENGINE_UI_UI3DCLIPPABLE_CULL_OFFSET UNITYSDK_OFFSET(0xB9A9B70)
#define UNITYENGINE_UI_UI3DCLIPPABLE_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0xB9A9A30)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xB9A9A80)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_A8F5229F397DA4EA_OFFSET UNITYSDK_OFFSET(0xB9A9ED0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_F437BF67AC1F1345_OFFSET UNITYSDK_OFFSET(0xB9A9BA0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB9A9B40)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9A9A60)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xB9A9B80)
#define UNITYENGINE_UI_UI3DCLIPPABLE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xB9A9B60)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xB9AA1D0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xB9AA570)
#define UNITYENGINE_UI_UI3DCLIPPABLE_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB9AA8D0)
#define UNITYENGINE_UI_UI3DCLIPPABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9AA880)
#define UNITYENGINE_UI_UI3DCLIPPABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AA840)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UI3DClippable_TypeDefinitionIndex = 44504;

	class UI3DClippable : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_7_5()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x6820);
		}
		static ::System::Int32* StaticGet_Field_7_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x30C0);
		}
		static ::System::Int32* StaticGet_Field_7_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x30C4);
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
