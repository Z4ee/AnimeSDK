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

#define UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x1A5AD610)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1A5B08A0)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1A5B08B0)
#define UNITYENGINE_UI_TEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5ABDD0)
#define UNITYENGINE_UI_TEXT_CULL_OFFSET UNITYSDK_OFFSET(0x1A5AD320)
#define UNITYENGINE_UI_TEXT_FILLVERTICES_OFFSET UNITYSDK_OFFSET(0x1A5AF950)
#define UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0x1A5AC450)
#define UNITYENGINE_UI_TEXT_GETCUSTOMGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5AD8B0)
#define UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A5AD670)
#define UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET UNITYSDK_OFFSET(0x1A5ADA70)
#define UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1A5ACBD0)
#define UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A5ACB60)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A5ABE70)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x1A5ABDF0)
#define UNITYENGINE_UI_TEXT_GET_COLORLB_OFFSET UNITYSDK_OFFSET(0x1A5AC360)
#define UNITYENGINE_UI_TEXT_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x1A5AC2A0)
#define UNITYENGINE_UI_TEXT_GET_COLORLT_OFFSET UNITYSDK_OFFSET(0x1A5AC300)
#define UNITYENGINE_UI_TEXT_GET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x1A5AC270)
#define UNITYENGINE_UI_TEXT_GET_COLORRB_OFFSET UNITYSDK_OFFSET(0x1A5AC390)
#define UNITYENGINE_UI_TEXT_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x1A5AC2D0)
#define UNITYENGINE_UI_TEXT_GET_COLORRT_OFFSET UNITYSDK_OFFSET(0x1A5AC330)
#define UNITYENGINE_UI_TEXT_GET_ELLIPSISCHAR_OFFSET UNITYSDK_OFFSET(0x1A5B0880)
#define UNITYENGINE_UI_TEXT_GET_ENABLEUNDERLINE_OFFSET UNITYSDK_OFFSET(0x1A5AC960)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A5B1D30)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1A5B0BC0)
#define UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1A5ACC30)
#define UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1A5ACE00)
#define UNITYENGINE_UI_TEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1A5AC5B0)
#define UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A5ACCA0)
#define UNITYENGINE_UI_TEXT_GET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1A5ACE70)
#define UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A5B1D40)
#define UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1A5ACD80)
#define UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A5AC010)
#define UNITYENGINE_UI_TEXT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A5B0BE0)
#define UNITYENGINE_UI_TEXT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1A5B0BF0)
#define UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A5B0BD0)
#define UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A5B08C0)
#define UNITYENGINE_UI_TEXT_GET_M_TEMPVERTS_OFFSET UNITYSDK_OFFSET(0x1A5ADA90)
#define UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1A5ACF50)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A5B0C20)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A5B08D0)
#define UNITYENGINE_UI_TEXT_GET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x1A5AC420)
#define UNITYENGINE_UI_TEXT_GET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x1A5AC3C0)
#define UNITYENGINE_UI_TEXT_GET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x1A5AC3F0)
#define UNITYENGINE_UI_TEXT_GET_REQUIRETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x1A5B0C00)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x1A5ACA00)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1A5AC980)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1A5ACAF0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x1A5ACA80)
#define UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x1A5AC8E0)
#define UNITYENGINE_UI_TEXT_GET_TEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1A5ACEE0)
#define UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A5AC6C0)
#define UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A5ACD10)
#define UNITYENGINE_UI_TEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A5ABEF0)
#define UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A5AD1C0)
#define UNITYENGINE_UI_TEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5AD090)
#define UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1A5ADB40)
#define UNITYENGINE_UI_TEXT_ONTEXTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A5AC8D0)
#define UNITYENGINE_UI_TEXT_REPLACEENDWITHELLIPSIS_OFFSET UNITYSDK_OFFSET(0x1A5AE6E0)
#define UNITYENGINE_UI_TEXT_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x1A5AD4E0)
#define UNITYENGINE_UI_TEXT_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1A5AD2B0)
#define UNITYENGINE_UI_TEXT_SETNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1A5AC780)
#define UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1A5ACBF0)
#define UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A5ACB80)
#define UNITYENGINE_UI_TEXT_SET_COLORLB_OFFSET UNITYSDK_OFFSET(0x1A5AC370)
#define UNITYENGINE_UI_TEXT_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x1A5AC2B0)
#define UNITYENGINE_UI_TEXT_SET_COLORLT_OFFSET UNITYSDK_OFFSET(0x1A5AC310)
#define UNITYENGINE_UI_TEXT_SET_COLORMODE_OFFSET UNITYSDK_OFFSET(0x1A5AC280)
#define UNITYENGINE_UI_TEXT_SET_COLORRB_OFFSET UNITYSDK_OFFSET(0x1A5AC3A0)
#define UNITYENGINE_UI_TEXT_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x1A5AC2E0)
#define UNITYENGINE_UI_TEXT_SET_COLORRT_OFFSET UNITYSDK_OFFSET(0x1A5AC340)
#define UNITYENGINE_UI_TEXT_SET_ELLIPSISCHAR_OFFSET UNITYSDK_OFFSET(0x1A5B0890)
#define UNITYENGINE_UI_TEXT_SET_ENABLEUNDERLINE_OFFSET UNITYSDK_OFFSET(0x1A5AC970)
#define UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1A5ACC50)
#define UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1A5ACE20)
#define UNITYENGINE_UI_TEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1A5AC5D0)
#define UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A5ACCC0)
#define UNITYENGINE_UI_TEXT_SET_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1A5ACE90)
#define UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0x1A5ACDA0)
#define UNITYENGINE_UI_TEXT_SET_RAMPOFFSET_OFFSET UNITYSDK_OFFSET(0x1A5AC430)
#define UNITYENGINE_UI_TEXT_SET_RAMPROTATION_OFFSET UNITYSDK_OFFSET(0x1A5AC3D0)
#define UNITYENGINE_UI_TEXT_SET_RAMPSCALE_OFFSET UNITYSDK_OFFSET(0x1A5AC400)
#define UNITYENGINE_UI_TEXT_SET_REQUIRETEXTFORMATFLAGS_OFFSET UNITYSDK_OFFSET(0x1A5B0C10)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTALLOWHORIZONTALWRAP_OFFSET UNITYSDK_OFFSET(0x1A5ACA20)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0x1A5AC9A0)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1A5ACB10)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0x1A5ACAA0)
#define UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0x1A5AC900)
#define UNITYENGINE_UI_TEXT_SET_TEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1A5ACEF0)
#define UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A5AC6D0)
#define UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A5ACD30)
#define UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1A5AD580)
#define UNITYENGINE_UI_TEXT_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A5AD5D0)
#define UNITYENGINE_UI_TEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5B1D50)
#define UNITYENGINE_UI_TEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5ABCA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Text_TypeDefinitionIndex = 5742;

	class Text : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::UI::ObjectPool_1<::UnityEngine::TextGenerator*>** StaticGet_textGeneratorPool()
		{
			return (::UnityEngine::UI::ObjectPool_1<::UnityEngine::TextGenerator*>**)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x1BF40);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultText()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x1BF48);
		}
		static ::System::Boolean* StaticGet_tempFixEllipsis()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Text_TypeDefinitionIndex)->GetStaticField(0x7350);
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
