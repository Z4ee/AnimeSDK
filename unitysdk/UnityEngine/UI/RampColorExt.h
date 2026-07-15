#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/UI/RampColorExt___c__DisplayClass6_0.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class IRampColor; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL0_OFFSET UNITYSDK_OFFSET(0x15DBBB10)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL1_OFFSET UNITYSDK_OFFSET(0x15DBC390)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL2_OFFSET UNITYSDK_OFFSET(0x15DBDA60)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORSIMPLE_OFFSET UNITYSDK_OFFSET(0x15DBF8E0)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLORNOSCALE_OFFSET UNITYSDK_OFFSET(0x15DC0230)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLOR_OFFSET UNITYSDK_OFFSET(0x15D9A3D0)
#define UNITYENGINE_UI_RAMPCOLOREXT_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x15DC04E0)
#define UNITYENGINE_UI_RAMPCOLOREXT_GETVERTEX_OFFSET UNITYSDK_OFFSET(0x15DC1200)
#define UNITYENGINE_UI_RAMPCOLOREXT__APPLYCOLORIMPL2_G__SETCOLOR_6_0_OFFSET UNITYSDK_OFFSET(0x15DC1460)
#define UNITYENGINE_UI_RAMPCOLOREXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC1540)
#define UNITYENGINE_UI_RAMPCOLOREXT__GETCOLOR_G__ROT_3_0_OFFSET UNITYSDK_OFFSET(0x15DC1160)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RampColorExt_TypeDefinitionIndex = 5965;

	class RampColorExt : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_Verts()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x3F800);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Indices0()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x3F808);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Indices1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x3F810);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Indices2()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x3F818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT__CCTOR_OFFSET))();
		}

		static ::System::Void ApplyVertexColor(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::UI::VertexHelper* a2, ::System::Nullable_1<::UnityEngine::Rect> a3, ::UnityEngine::UI::ColorMode a4, ::UnityEngine::AdditionalCanvasShaderChannels a5)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::UI::VertexHelper*, ::System::Nullable_1<::UnityEngine::Rect>, ::UnityEngine::UI::ColorMode, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ApplyVertexColorNoScale(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::UI::ColorMode a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::UI::ColorMode, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLORNOSCALE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ApplyColorSimple(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::System::Nullable_1<::UnityEngine::Rect> a3, ::UnityEngine::UI::ColorMode a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a5, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Nullable_1<::UnityEngine::Rect>, ::UnityEngine::UI::ColorMode, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORSIMPLE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Color32 GetColor(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Rect a3, ::UnityEngine::UI::ColorMode a4)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_GETCOLOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ApplyColorImpl0(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::System::Single a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a4, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Single, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL0_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ApplyColorImpl1(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::AdditionalCanvasShaderChannels a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a7, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a8)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::AdditionalCanvasShaderChannels, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void ApplyColorImpl2(::UnityEngine::UI::IRampColor* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::AdditionalCanvasShaderChannels a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5, ::System::Single a6, ::System::Single a7, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a8, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a9)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::AdditionalCanvasShaderChannels, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::UIVertex GetVertex(::UnityEngine::UIVertex& a1, ::UnityEngine::UIVertex& a2, ::UnityEngine::AdditionalCanvasShaderChannels a3, ::System::Single a4, ::UnityEngine::Color32 a5)
		{
			return ((::UnityEngine::UIVertex(*)(::UnityEngine::UIVertex&, ::UnityEngine::UIVertex&, ::UnityEngine::AdditionalCanvasShaderChannels, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_GETVERTEX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector2 _GetColor_g__rot_3_0(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT__GETCOLOR_G__ROT_3_0_OFFSET))(a1, a2);
		}

		static ::System::Void _ApplyColorImpl2_g__SetColor_6_0(::System::Int32 a1, ::UnityEngine::Color32 a2, ::UnityEngine::UI::RampColorExt___c__DisplayClass6_0& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Color32, ::UnityEngine::UI::RampColorExt___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT__APPLYCOLORIMPL2_G__SETCOLOR_6_0_OFFSET))(a1, a2, a3);
		}
	};
}
