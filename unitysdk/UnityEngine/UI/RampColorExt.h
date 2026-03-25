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

#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL0_OFFSET UNITYSDK_OFFSET(0x18B45430)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL1_OFFSET UNITYSDK_OFFSET(0x18B45C00)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL2_OFFSET UNITYSDK_OFFSET(0x18B47700)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORSIMPLE_OFFSET UNITYSDK_OFFSET(0x18B49940)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLORNOSCALE_OFFSET UNITYSDK_OFFSET(0x18B4A480)
#define UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLOR_OFFSET UNITYSDK_OFFSET(0x18B25440)
#define UNITYENGINE_UI_RAMPCOLOREXT_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x18B4AAF0)
#define UNITYENGINE_UI_RAMPCOLOREXT_GETVERTEX_OFFSET UNITYSDK_OFFSET(0x18B4B520)
#define UNITYENGINE_UI_RAMPCOLOREXT__APPLYCOLORIMPL2_G__SETCOLOR_6_0_OFFSET UNITYSDK_OFFSET(0x18B4B780)
#define UNITYENGINE_UI_RAMPCOLOREXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B4B9A0)
#define UNITYENGINE_UI_RAMPCOLOREXT__GETCOLOR_G__ROT_3_0_OFFSET UNITYSDK_OFFSET(0x18B4B4A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RampColorExt_TypeDefinitionIndex = 5671;

	class RampColorExt : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Indices0()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x5D70);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_s_Verts()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x5D78);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Indices2()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x5D80);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Indices1()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RampColorExt_TypeDefinitionIndex)->GetStaticField(0x5D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT__CCTOR_OFFSET))();
		}

		static ::System::Void ApplyVertexColor(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::UI::VertexHelper* vh, ::System::Nullable_1<::UnityEngine::Rect> rect, ::UnityEngine::UI::ColorMode mode, ::UnityEngine::AdditionalCanvasShaderChannels channels)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::UI::VertexHelper*, ::System::Nullable_1<::UnityEngine::Rect>, ::UnityEngine::UI::ColorMode, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLOR_OFFSET))(rampColor, vh, rect, mode, channels);
		}

		static ::System::Void ApplyVertexColorNoScale(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices, ::UnityEngine::UI::ColorMode mode, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::UI::ColorMode, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYVERTEXCOLORNOSCALE_OFFSET))(rampColor, vertices, mode, output);
		}

		static ::System::Void ApplyColorSimple(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices, ::System::Nullable_1<::UnityEngine::Rect> rect, ::UnityEngine::UI::ColorMode mode, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Nullable_1<::UnityEngine::Rect>, ::UnityEngine::UI::ColorMode, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORSIMPLE_OFFSET))(rampColor, vertices, rect, mode, output, indices);
		}

		static ::UnityEngine::Color32 GetColor(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::Vector2 v, ::UnityEngine::Rect rect, ::UnityEngine::UI::ColorMode mode)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Vector2, ::UnityEngine::Rect, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_GETCOLOR_OFFSET))(rampColor, v, rect, mode);
		}

		static ::System::Void ApplyColorImpl0(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices, ::System::Single left, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Single, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL0_OFFSET))(rampColor, vertices, left, output, indices);
		}

		static ::System::Void ApplyColorImpl1(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices, ::UnityEngine::AdditionalCanvasShaderChannels channels, ::UnityEngine::Vector2 vLeft, ::System::Single left, ::System::Single right, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::AdditionalCanvasShaderChannels, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL1_OFFSET))(rampColor, vertices, channels, vLeft, left, right, output, indices);
		}

		static ::System::Void ApplyColorImpl2(::UnityEngine::UI::IRampColor* rampColor, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* vertices, ::UnityEngine::AdditionalCanvasShaderChannels channels, ::UnityEngine::Vector2 vLeft, ::System::Boolean isLeft, ::System::Single left, ::System::Single right, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* output, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IRampColor*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::AdditionalCanvasShaderChannels, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_APPLYCOLORIMPL2_OFFSET))(rampColor, vertices, channels, vLeft, isLeft, left, right, output, indices);
		}

		static ::UnityEngine::UIVertex GetVertex(::UnityEngine::UIVertex& a, ::UnityEngine::UIVertex& b, ::UnityEngine::AdditionalCanvasShaderChannels channels, ::System::Single factor, ::UnityEngine::Color32 color)
		{
			return ((::UnityEngine::UIVertex(*)(::UnityEngine::UIVertex&, ::UnityEngine::UIVertex&, ::UnityEngine::AdditionalCanvasShaderChannels, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT_GETVERTEX_OFFSET))(a, b, channels, factor, color);
		}

		static ::UnityEngine::Vector2 _GetColor_g__rot_3_0(::UnityEngine::Vector2 pos, ::System::Single angle)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT__GETCOLOR_G__ROT_3_0_OFFSET))(pos, angle);
		}

		static ::System::Void _ApplyColorImpl2_g__SetColor_6_0(::System::Int32 index, ::UnityEngine::Color32 color, ::UnityEngine::UI::RampColorExt___c__DisplayClass6_0& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Color32, ::UnityEngine::UI::RampColorExt___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RAMPCOLOREXT__APPLYCOLORIMPL2_G__SETCOLOR_6_0_OFFSET))(index, color, a3);
		}
	};
}
