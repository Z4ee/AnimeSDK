#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/HorizontalWrapMode.h"
#include "unitysdk/UnityEngine/NativeStringRef.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/TextFormattingTag.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/VerticalWrapMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class FontData; }
namespace UnityEngine::UI { class RampData; }
namespace UnityEngine::UI { class Text_ITextIcons; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI { template <typename T> class ObjectPool_1; }

#define UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x18B71D70)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x18B75000)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18B75010)
#define UNITYENGINE_UI_TEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B70530)
#define UNITYENGINE_UI_TEXT_CULL_OFFSET UNITYSDK_OFFSET(0x18B71A80)
#define UNITYENGINE_UI_TEXT_FILLVERTICES_OFFSET UNITYSDK_OFFSET(0x18B740B0)
#define UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0x18B70BB0)
#define UNITYENGINE_UI_TEXT_GETCUSTOMGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18B72010)
#define UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18B71DD0)
#define UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET UNITYSDK_OFFSET(0x18B721D0)
#define UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18B71330)
#define UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x18B712C0)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET UNITYSDK_OFFSET(0x18B705D0)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x18B70550)
#define UNITYENGINE_UI_TEXT_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0x18B70AC0)
#define UNITYENGINE_UI_TEXT_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x18B70A00)
#define UNITYENGINE_UI_TEXT_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0x18B70A60)
#define UNITYENGINE_UI_TEXT_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x18B709D0)
#define UNITYENGINE_UI_TEXT_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0x18B70AF0)
#define UNITYENGINE_UI_TEXT_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x18B70A30)
#define UNITYENGINE_UI_TEXT_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0x18B70A90)
#define UNITYENGINE_UI_TEXT_GET_ELLIPSISCHAR_OFFSET UNITYSDK_OFFSET(0x18B74FE0)
#define UNITYENGINE_UI_TEXT_GET_ENABLEUNDERLINE_OFFSET UNITYSDK_OFFSET(0x18B710C0)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B76490)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x18B75320)
#define UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x18B71390)
#define UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x18B71560)
#define UNITYENGINE_UI_TEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x18B70D10)
#define UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x18B71400)
#define UNITYENGINE_UI_TEXT_GET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x18B715D0)
#define UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x18B764A0)
#define UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x18B714E0)
#define UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18B70770)
#define UNITYENGINE_UI_TEXT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B75340)
#define UNITYENGINE_UI_TEXT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x18B75350)
#define UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B75330)
#define UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x18B75020)
#define UNITYENGINE_UI_TEXT_GET_M_TEMPVERTS_OFFSET UNITYSDK_OFFSET(0x18B721F0)
#define UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x18B716B0)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18B75380)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x18B75030)
#define UNITYENGINE_UI_TEXT_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x18B70B80)
#define UNITYENGINE_UI_TEXT_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x18B70B20)
#define UNITYENGINE_UI_TEXT_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x18B70B50)
#define UNITYENGINE_UI_TEXT_GET_REQUIRETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x18B75360)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x18B71160)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x18B710E0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x18B71250)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x18B711E0)
#define UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x18B71040)
#define UNITYENGINE_UI_TEXT_GET_TEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x18B71640)
#define UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18B70E20)
#define UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x18B71470)
#define UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B70650)
#define UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18B71920)
#define UNITYENGINE_UI_TEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18B717F0)
#define UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18B722A0)
#define UNITYENGINE_UI_TEXT_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x18B71030)
#define UNITYENGINE_UI_TEXT_REPLACEENDWITHELLIPSIS_OFFSET UNITYSDK_OFFSET(0x18B72E40)
#define UNITYENGINE_UI_TEXT_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x18B71C40)
#define UNITYENGINE_UI_TEXT_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x18B71A10)
#define UNITYENGINE_UI_TEXT_SETNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x18B70EE0)
#define UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18B71350)
#define UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x18B712E0)
#define UNITYENGINE_UI_TEXT_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0x18B70AD0)
#define UNITYENGINE_UI_TEXT_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x18B70A10)
#define UNITYENGINE_UI_TEXT_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0x18B70A70)
#define UNITYENGINE_UI_TEXT_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x18B709E0)
#define UNITYENGINE_UI_TEXT_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0x18B70B00)
#define UNITYENGINE_UI_TEXT_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x18B70A40)
#define UNITYENGINE_UI_TEXT_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0x18B70AA0)
#define UNITYENGINE_UI_TEXT_SET_ELLIPSISCHAR_OFFSET UNITYSDK_OFFSET(0x18B74FF0)
#define UNITYENGINE_UI_TEXT_SET_ENABLEUNDERLINE_OFFSET UNITYSDK_OFFSET(0x18B710D0)
#define UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x18B713B0)
#define UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x18B71580)
#define UNITYENGINE_UI_TEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x18B70D30)
#define UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x18B71420)
#define UNITYENGINE_UI_TEXT_SET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x18B715F0)
#define UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x18B71500)
#define UNITYENGINE_UI_TEXT_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x18B70B90)
#define UNITYENGINE_UI_TEXT_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x18B70B30)
#define UNITYENGINE_UI_TEXT_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x18B70B60)
#define UNITYENGINE_UI_TEXT_SET_REQUIRETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x18B75370)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x18B71180)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x18B71100)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x18B71270)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x18B71200)
#define UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x18B71060)
#define UNITYENGINE_UI_TEXT_SET_TEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x18B71650)
#define UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18B70E30)
#define UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x18B71490)
#define UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x18B71CE0)
#define UNITYENGINE_UI_TEXT_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B71D30)
#define UNITYENGINE_UI_TEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B764B0)
#define UNITYENGINE_UI_TEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B70400)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Text_TypeDefinitionIndex = 5730;

	class Text : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::TextGenerator*>** StaticGet_textGeneratorPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::TextGenerator*>**)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x67C0);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultText()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x67C8);
		}
		static ::System::Boolean* StaticGet_tempFixEllipsis()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x3C60);
		}
		// static const ::System::String* _ELLIPSIS_APENDIX; // 0x0
		::UnityEngine::UI::FontData* m_FontData; // 0xF0
		::System::String* m_Text; // 0xF8
		::System::Boolean m_EnableUnderline; // 0x100
		::UnityEngine::TextGenerator* m_TextCache; // 0x108
		::UnityEngine::TextGenerator* m_TextCacheForLayout; // 0x110
		::System::Boolean m_needForceUpdate; // 0x118
		::System::Boolean m_DisableFontTextureRebuiltCallback; // 0x119
		::UnityEngine::UI::ColorMode m_ColorMode; // 0x11C
		::UnityEngine::UI::RampData* m_RampData; // 0x120
		::UnityEngine::Color m_RampColorLeft; // 0x128
		::UnityEngine::Color m_RampColorRight; // 0x138
		::UnityEngine::Color m_4RampColorLB; // 0x148
		::UnityEngine::Color m_4RampColorRB; // 0x158
		::System::Single m_RampRotation; // 0x168
		::System::Single m_RampScale; // 0x16C
		::System::Single m_RampOffset; // 0x170
		::System::Single m_TextureScale; // 0x174
		::Il2CppArray<::UnityEngine::UIVertex>* tempVerts; // 0x178
		::System::Char m_EllipsisChar; // 0x180
		::System::Boolean _requireTextFormatFlags_k__BackingField; // 0x182
		::System::Boolean usingRuntimeAtlas; // 0x183
		::UnityEngine::UI::Text_ITextIcons* m_Icons; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT__CCTOR_OFFSET))();
		}

		static ::System::Void Clear(::UnityEngine::TextGenerator* g)
		{
			return ((::System::Void(*)(::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CLEAR_OFFSET))(g);
		}

		::UnityEngine::TextGenerator* get_cachedTextGenerator()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::UI::ColorMode get_colorMode()
		{
			return ((::UnityEngine::UI::ColorMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORMODE_OFFSET))(this);
		}

		::System::Void set_colorMode(::UnityEngine::UI::ColorMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ColorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORMODE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_colorLeft(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORLEFT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_colorRight(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORRIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORLT_OFFSET))(this);
		}

		::System::Void set_colorLT(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORLT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRT()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORRT_OFFSET))(this);
		}

		::System::Void set_colorRT(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORRT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorLB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORLB_OFFSET))(this);
		}

		::System::Void set_colorLB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORLB_OFFSET))(this, value);
		}

		::UnityEngine::Color get_colorRB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_COLORRB_OFFSET))(this);
		}

		::System::Void set_colorRB(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_COLORRB_OFFSET))(this, value);
		}

		::System::Single get_rampRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RAMPROTATION_OFFSET))(this);
		}

		::System::Void set_rampRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RAMPROTATION_OFFSET))(this, value);
		}

		::System::Single get_rampScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RAMPSCALE_OFFSET))(this);
		}

		::System::Void set_rampScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RAMPSCALE_OFFSET))(this, value);
		}

		::System::Single get_rampOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RAMPOFFSET_OFFSET))(this);
		}

		::System::Void set_rampOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RAMPOFFSET_OFFSET))(this, value);
		}

		::System::Void FontTextureChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET))(this);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONT_OFFSET))(this, value);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void SetNativeString(::UnityEngine::NativeStringRef str)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SETNATIVESTRING_OFFSET))(this, str);
		}

		::System::Void OnTextChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONTEXTCHANGED_OFFSET))(this);
		}

		::System::Boolean get_supportRichText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET))(this);
		}

		::System::Void set_supportRichText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET))(this, value);
		}

		::System::Boolean get_enableUnderline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ENABLEUNDERLINE_OFFSET))(this);
		}

		::System::Void set_enableUnderline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ENABLEUNDERLINE_OFFSET))(this, value);
		}

		::System::Boolean get_resizeTextForBestFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET))(this);
		}

		::System::Void set_resizeTextForBestFit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET))(this, value);
		}

		::System::Boolean get_resizeTextAllowHorizontalWrap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET))(this);
		}

		::System::Void set_resizeTextAllowHorizontalWrap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET))(this, value);
		}

		::System::Int32 get_resizeTextMinSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET))(this);
		}

		::System::Void set_resizeTextMinSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_resizeTextMaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET))(this);
		}

		::System::Void set_resizeTextMaxSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET))(this, value);
		}

		::UnityEngine::TextAnchor get_alignment()
		{
			return ((::UnityEngine::TextAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_alignByGeometry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET))(this);
		}

		::System::Void set_alignByGeometry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET))(this, value);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::HorizontalWrapMode get_horizontalOverflow()
		{
			return ((::UnityEngine::HorizontalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HorizontalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET))(this, value);
		}

		::UnityEngine::VerticalWrapMode get_verticalOverflow()
		{
			return ((::UnityEngine::VerticalWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET))(this);
		}

		::System::Void set_verticalOverflow(::UnityEngine::VerticalWrapMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VerticalWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET))(this, value);
		}

		::System::Single get_lineSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET))(this);
		}

		::System::Void set_lineSpacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET))(this, value);
		}

		::UnityEngine::FontStyle get_fontStyle()
		{
			return ((::UnityEngine::FontStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET))(this);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET))(this, value);
		}

		::UnityEngine::TextFormattingTag get_invalidTag()
		{
			return ((::UnityEngine::TextFormattingTag(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_INVALIDTAG_OFFSET))(this);
		}

		::System::Void set_invalidTag(::UnityEngine::TextFormattingTag value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormattingTag))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_INVALIDTAG_OFFSET))(this, value);
		}

		::System::Single get_textureScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_TEXTURESCALE_OFFSET))(this);
		}

		::System::Void set_textureScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_TEXTURESCALE_OFFSET))(this, value);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CULL_OFFSET))(this, clipRect, validRect);
		}

		::System::Void SetClipRect(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SETCLIPRECT_OFFSET))(this, clipRect, validRect);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void AssignDefaultFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET))(this);
		}

		::UnityEngine::TextGenerationSettings GetGenerationSettings(::UnityEngine::Vector2 extents)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET))(this, extents);
		}

		::UnityEngine::TextGenerationSettings GetCustomGenerationSettings(::UnityEngine::Vector2 extents)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETCUSTOMGENERATIONSETTINGS_OFFSET))(this, extents);
		}

		static ::UnityEngine::Vector2 GetTextAnchorPivot(::UnityEngine::TextAnchor anchor)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET))(anchor);
		}

		::Il2CppArray<::UnityEngine::UIVertex>* get_m_TempVerts()
		{
			return ((::Il2CppArray<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_M_TEMPVERTS_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Void FillVertices(::UnityEngine::UI::VertexHelper* toFill, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* verts, ::System::Int32 vertexCount, ::UnityEngine::Vector2 roundingOffset, ::System::Single unitsPerPixel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Int32, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_FILLVERTICES_OFFSET))(this, toFill, verts, vertexCount, roundingOffset, unitsPerPixel);
		}

		::System::Char get_ellipsisChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ELLIPSISCHAR_OFFSET))(this);
		}

		::System::Void set_ellipsisChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ELLIPSISCHAR_OFFSET))(this, value);
		}

		::System::Boolean ReplaceEndWithEllipsis(::UnityEngine::TextGenerationSettings& settings, ::System::Int32& ellpsisLineNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextGenerationSettings&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_REPLACEENDWITHELLIPSIS_OFFSET))(this, settings, ellpsisLineNum);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Boolean get_requireTextFormatFlags()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_REQUIRETEXTFORMATFLAGS_OFFSET))(this);
		}

		::System::Void set_requireTextFormatFlags(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_REQUIRETEXTFORMATFLAGS_OFFSET))(this, value);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}
	};
}
