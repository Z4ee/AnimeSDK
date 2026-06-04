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

#define UNITYENGINE_UI_UI3DCLIPPABLE_CULL_OFFSET UNITYSDK_OFFSET(0xD0F1850)
#define UNITYENGINE_UI_UI3DCLIPPABLE_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0xD0F1710)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_A8F5229F397DA4EA_OFFSET UNITYSDK_OFFSET(0xD0F1BB0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0xD0F1760)
#define UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_F437BF67AC1F1345_OFFSET UNITYSDK_OFFSET(0xD0F1880)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0F1820)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD0F1740)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xD0F1860)
#define UNITYENGINE_UI_UI3DCLIPPABLE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xD0F1840)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xD0F1EB0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xD0F2230)
#define UNITYENGINE_UI_UI3DCLIPPABLE_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD0F2570)
#define UNITYENGINE_UI_UI3DCLIPPABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0F2520)
#define UNITYENGINE_UI_UI3DCLIPPABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F24E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UI3DClippable_TypeDefinitionIndex = 45051;

	class UI3DClippable : public ::UnityEngine::UI::Graphic
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_7_0()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x137E0);
		}
		static ::System::Int32* StaticGet_Field_7_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x7AC0);
		}
		static ::System::Int32* StaticGet_Field_7_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UI3DClippable_TypeDefinitionIndex)->GetStaticField(0x7AC4);
		}
		::Il2CppArray<::UnityEngine::MeshRenderer*>* _MeshRenderers; // 0xA0
		::UnityEngine::Camera* Field_7_4; // 0xA8
		::UnityEngine::UI::RectMask2D* Field_7_5; // 0xB0
		::UnityEngine::Vector4 Field_7_6; // 0xB8
		::UnityEngine::Vector4 Field_7_7; // 0xC8

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

		::System::Void Method_7_B7A43C06FD78D78B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_METHOD_7_B7A43C06FD78D78B_OFFSET))(this);
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
