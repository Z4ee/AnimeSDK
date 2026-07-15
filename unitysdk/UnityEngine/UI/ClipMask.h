#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_CLIPMASK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10532850)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_042238520AD07030_OFFSET UNITYSDK_OFFSET(0x10531AC0)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_0B1310FB3A3FC15B_OFFSET UNITYSDK_OFFSET(0x10532E60)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_43A2EE4D2DAB62A5_OFFSET UNITYSDK_OFFSET(0x10531D90)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_6C2D920148861652_OFFSET UNITYSDK_OFFSET(0x10531B40)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_80E2BAA11C6B6D78_OFFSET UNITYSDK_OFFSET(0x10533710)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_89A381B69C7BCE8A_OFFSET UNITYSDK_OFFSET(0x10532C70)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_CB8119332027A47B_OFFSET UNITYSDK_OFFSET(0x10533140)
#define UNITYENGINE_UI_CLIPMASK_METHOD_7_FDFB5995282C8F6F_OFFSET UNITYSDK_OFFSET(0x10531BE0)
#define UNITYENGINE_UI_CLIPMASK_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0x10531C80)
#define UNITYENGINE_UI_CLIPMASK_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x10531C70)
#define UNITYENGINE_UI_CLIPMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10532620)
#define UNITYENGINE_UI_CLIPMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x105341A0)
#define UNITYENGINE_UI_CLIPMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x10531C60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ClipMask_TypeDefinitionIndex = 45967;

	class ClipMask : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_7_0()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ClipMask_TypeDefinitionIndex)->GetStaticField(0x6BE00);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_7_1()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ClipMask_TypeDefinitionIndex)->GetStaticField(0x6BE08);
		}
		::UnityEngine::RectTransform* clipRectTransform; // 0x20
		::UnityEngine::RectTransform* Field_7_3; // 0x28
		::UnityEngine::UI::RawImage* Field_7_4; // 0x30
		::UnityEngine::UI::Image* Field_7_5; // 0x38
		::UnityEngine::Vector3 Field_7_6; // 0x40
		::UnityEngine::Vector3 Field_7_7; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* Method_7_042238520AD07030()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_042238520AD07030_OFFSET))(this);
		}

		::UnityEngine::UI::RawImage* Method_7_6C2D920148861652()
		{
			return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_6C2D920148861652_OFFSET))(this);
		}

		::UnityEngine::UI::Image* Method_7_FDFB5995282C8F6F()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_FDFB5995282C8F6F_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void ModifyMesh_1(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_MODIFYMESH_1_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_7_43A2EE4D2DAB62A5(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_43A2EE4D2DAB62A5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_89A381B69C7BCE8A(::UnityEngine::Rect& a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_89A381B69C7BCE8A_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 Method_7_0B1310FB3A3FC15B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_0B1310FB3A3FC15B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_7_CB8119332027A47B(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_CB8119332027A47B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_80E2BAA11C6B6D78(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_METHOD_7_80E2BAA11C6B6D78_OFFSET))(this, a1, a2, a3);
		}
	};
}
