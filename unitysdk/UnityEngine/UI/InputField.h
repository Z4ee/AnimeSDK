#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/TouchScreenKeyboardType.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/InputField_CharacterValidation.h"
#include "unitysdk/UnityEngine/UI/InputField_ContentType.h"
#include "unitysdk/UnityEngine/UI/InputField_EditState.h"
#include "unitysdk/UnityEngine/UI/InputField_InputType.h"
#include "unitysdk/UnityEngine/UI/InputField_LineType.h"
#include "unitysdk/UnityEngine/UI/Selectable.h"
#include "unitysdk/UnityEngine/UI/Selectable_SelectionState.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine { class TouchScreenKeyboard; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForSecondsRealtime; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseInput; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class InputField_OnChangeEvent; }
namespace UnityEngine::UI { class InputField_OnValidateInput; }
namespace UnityEngine::UI { class InputField_SubmitEvent; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3B5020)
#define UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1B3BF800)
#define UNITYENGINE_UI_INPUTFIELD_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1B3BB820)
#define UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET UNITYSDK_OFFSET(0x1B3BB720)
#define UNITYENGINE_UI_INPUTFIELD_ASSIGNPOSITIONINGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1B3B55A0)
#define UNITYENGINE_UI_INPUTFIELD_BACKSPACE_OFFSET UNITYSDK_OFFSET(0x1B3B89C0)
#define UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B3BFE60)
#define UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B3BFE70)
#define UNITYENGINE_UI_INPUTFIELD_CARETBLINK_OFFSET UNITYSDK_OFFSET(0x1B3B41E0)
#define UNITYENGINE_UI_INPUTFIELD_CLAMPPOS_OFFSET UNITYSDK_OFFSET(0x1B3B2F10)
#define UNITYENGINE_UI_INPUTFIELD_CREATECURSORVERTS_OFFSET UNITYSDK_OFFSET(0x1B3BF6E0)
#define UNITYENGINE_UI_INPUTFIELD_DEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1B3B3F20)
#define UNITYENGINE_UI_INPUTFIELD_DELETE_OFFSET UNITYSDK_OFFSET(0x1B3B90F0)
#define UNITYENGINE_UI_INPUTFIELD_DETERMINECHARACTERLINE_OFFSET UNITYSDK_OFFSET(0x1B3BA2A0)
#define UNITYENGINE_UI_INPUTFIELD_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1B3BFC40)
#define UNITYENGINE_UI_INPUTFIELD_ENFORCECONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B23B0)
#define UNITYENGINE_UI_INPUTFIELD_ENFORCETEXTHOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1B3B0E20)
#define UNITYENGINE_UI_INPUTFIELD_FINDTNEXTWORDBEGIN_OFFSET UNITYSDK_OFFSET(0x1B3BA040)
#define UNITYENGINE_UI_INPUTFIELD_FINDTPREVWORDBEGIN_OFFSET UNITYSDK_OFFSET(0x1B3BA180)
#define UNITYENGINE_UI_INPUTFIELD_FORCELABELUPDATE_OFFSET UNITYSDK_OFFSET(0x1B3BD680)
#define UNITYENGINE_UI_INPUTFIELD_FORWARDSPACE_OFFSET UNITYSDK_OFFSET(0x1B3B8D50)
#define UNITYENGINE_UI_INPUTFIELD_GENERATECARET_OFFSET UNITYSDK_OFFSET(0x1B3BDE20)
#define UNITYENGINE_UI_INPUTFIELD_GENERATEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1B3BE990)
#define UNITYENGINE_UI_INPUTFIELD_GETCHARACTERINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B7270)
#define UNITYENGINE_UI_INPUTFIELD_GETLINEENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B75D0)
#define UNITYENGINE_UI_INPUTFIELD_GETLINESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3BD510)
#define UNITYENGINE_UI_INPUTFIELD_GETSELECTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B3B9000)
#define UNITYENGINE_UI_INPUTFIELD_GETUNCLAMPEDCHARACTERLINEFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B7010)
#define UNITYENGINE_UI_INPUTFIELD_GET_ASTERISKCHAR_OFFSET UNITYSDK_OFFSET(0x1B3B2E30)
#define UNITYENGINE_UI_INPUTFIELD_GET_CACHEDINPUTTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x1B3B0F20)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETBLINKRATE_OFFSET UNITYSDK_OFFSET(0x1B3B1570)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3B1E30)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3B2F50)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B3140)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETSELECTPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3B2FF0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3B16B0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1B3B2200)
#define UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B3B2C80)
#define UNITYENGINE_UI_INPUTFIELD_GET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1B3B46E0)
#define UNITYENGINE_UI_INPUTFIELD_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1B3B0A10)
#define UNITYENGINE_UI_INPUTFIELD_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B22F0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CUSTOMCARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3B1F10)
#define UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C0470)
#define UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C0120)
#define UNITYENGINE_UI_INPUTFIELD_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1B3B3090)
#define UNITYENGINE_UI_INPUTFIELD_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B28B0)
#define UNITYENGINE_UI_INPUTFIELD_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1B3B0950)
#define UNITYENGINE_UI_INPUTFIELD_GET_ISAUTOADAPTSIZE_OFFSET UNITYSDK_OFFSET(0x1B3C0490)
#define UNITYENGINE_UI_INPUTFIELD_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B3B1560)
#define UNITYENGINE_UI_INPUTFIELD_GET_KEYBOARDTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B2B00)
#define UNITYENGINE_UI_INPUTFIELD_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B3C0480)
#define UNITYENGINE_UI_INPUTFIELD_GET_LINETYPE_OFFSET UNITYSDK_OFFSET(0x1B3B2560)
#define UNITYENGINE_UI_INPUTFIELD_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C0140)
#define UNITYENGINE_UI_INPUTFIELD_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3C0150)
#define UNITYENGINE_UI_INPUTFIELD_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1B3B0ED0)
#define UNITYENGINE_UI_INPUTFIELD_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C0130)
#define UNITYENGINE_UI_INPUTFIELD_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3BFE80)
#define UNITYENGINE_UI_INPUTFIELD_GET_MULTILINE_OFFSET UNITYSDK_OFFSET(0x1B3B2E20)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1B3B1FB0)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x1B3B21A0)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3B2150)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1B3B2040)
#define UNITYENGINE_UI_INPUTFIELD_GET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1B3B1DA0)
#define UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3C0160)
#define UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3BFE90)
#define UNITYENGINE_UI_INPUTFIELD_GET_READONLY_OFFSET UNITYSDK_OFFSET(0x1B3B2E00)
#define UNITYENGINE_UI_INPUTFIELD_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3BD230)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B32E0)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3B1F40)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONFOCUSPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B3340)
#define UNITYENGINE_UI_INPUTFIELD_GET_SHOULDACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x1B3B1070)
#define UNITYENGINE_UI_INPUTFIELD_GET_SHOULDHIDEMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0x1B3B1020)
#define UNITYENGINE_UI_INPUTFIELD_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B3B1780)
#define UNITYENGINE_UI_INPUTFIELD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B3B10A0)
#define UNITYENGINE_UI_INPUTFIELD_GET_TOUCHSCREENKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1B3B2AF0)
#define UNITYENGINE_UI_INPUTFIELD_GET_WASCANCELED_OFFSET UNITYSDK_OFFSET(0x1B3B2F00)
#define UNITYENGINE_UI_INPUTFIELD_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3BDCF0)
#define UNITYENGINE_UI_INPUTFIELD_INPLACEEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3B47D0)
#define UNITYENGINE_UI_INPUTFIELD_INPLACEEDITING_OFFSET UNITYSDK_OFFSET(0x1B3B4760)
#define UNITYENGINE_UI_INPUTFIELD_INSERT_OFFSET UNITYSDK_OFFSET(0x1B3BB3B0)
#define UNITYENGINE_UI_INPUTFIELD_ISSELECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B3BD390)
#define UNITYENGINE_UI_INPUTFIELD_ISVALIDCHAR_OFFSET UNITYSDK_OFFSET(0x1B3B9DF0)
#define UNITYENGINE_UI_INPUTFIELD_KEYPRESSED_OFFSET UNITYSDK_OFFSET(0x1B3B8440)
#define UNITYENGINE_UI_INPUTFIELD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B3B4970)
#define UNITYENGINE_UI_INPUTFIELD_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1B3BDCE0)
#define UNITYENGINE_UI_INPUTFIELD_LINEDOWNCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3BA9A0)
#define UNITYENGINE_UI_INPUTFIELD_LINEUPCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3BA3D0)
#define UNITYENGINE_UI_INPUTFIELD_MARKGEOMETRYASDIRTY_OFFSET UNITYSDK_OFFSET(0x1B3B1770)
#define UNITYENGINE_UI_INPUTFIELD_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1B3B7750)
#define UNITYENGINE_UI_INPUTFIELD_MOUSEDRAGOUTSIDERECT_OFFSET UNITYSDK_OFFSET(0x1B3B7E20)
#define UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_1_OFFSET UNITYSDK_OFFSET(0x1B3BAEE0)
#define UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0x1B3B9DE0)
#define UNITYENGINE_UI_INPUTFIELD_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x1B3B9950)
#define UNITYENGINE_UI_INPUTFIELD_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0x1B3B9B90)
#define UNITYENGINE_UI_INPUTFIELD_MOVETEXTEND_OFFSET UNITYSDK_OFFSET(0x1B3B4510)
#define UNITYENGINE_UI_INPUTFIELD_MOVETEXTSTART_OFFSET UNITYSDK_OFFSET(0x1B3B45E0)
#define UNITYENGINE_UI_INPUTFIELD_MOVEUP_1_OFFSET UNITYSDK_OFFSET(0x1B3BB140)
#define UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET UNITYSDK_OFFSET(0x1B3B9DD0)
#define UNITYENGINE_UI_INPUTFIELD_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B3B1450)
#define UNITYENGINE_UI_INPUTFIELD_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1B3B7810)
#define UNITYENGINE_UI_INPUTFIELD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1B3BFA80)
#define UNITYENGINE_UI_INPUTFIELD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3B3C20)
#define UNITYENGINE_UI_INPUTFIELD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1B3B78E0)
#define UNITYENGINE_UI_INPUTFIELD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B3B33A0)
#define UNITYENGINE_UI_INPUTFIELD_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1B3B7E80)
#define UNITYENGINE_UI_INPUTFIELD_ONFILLVBO_OFFSET UNITYSDK_OFFSET(0x1B3BDD00)
#define UNITYENGINE_UI_INPUTFIELD_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B3B4450)
#define UNITYENGINE_UI_INPUTFIELD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1B3BFA50)
#define UNITYENGINE_UI_INPUTFIELD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1B3B7F50)
#define UNITYENGINE_UI_INPUTFIELD_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1B3BF8D0)
#define UNITYENGINE_UI_INPUTFIELD_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B3BFBF0)
#define UNITYENGINE_UI_INPUTFIELD_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1B3B9E60)
#define UNITYENGINE_UI_INPUTFIELD_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1B3B9E50)
#define UNITYENGINE_UI_INPUTFIELD_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B3BD690)
#define UNITYENGINE_UI_INPUTFIELD_SCREENTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1B3B6B00)
#define UNITYENGINE_UI_INPUTFIELD_SELECTALL_OFFSET UNITYSDK_OFFSET(0x1B3B44B0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B3BB6C0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGEDANDUPDATELABEL_OFFSET UNITYSDK_OFFSET(0x1B3B6AA0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3B1510)
#define UNITYENGINE_UI_INPUTFIELD_SETCARETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B3B1620)
#define UNITYENGINE_UI_INPUTFIELD_SETCARETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B3B4240)
#define UNITYENGINE_UI_INPUTFIELD_SETDRAWRANGETOCONTAINCARETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3BBF00)
#define UNITYENGINE_UI_INPUTFIELD_SETTEXTWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B3B14E0)
#define UNITYENGINE_UI_INPUTFIELD_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1B3B10B0)
#define UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOMIFCONTENTTYPEISNOT_OFFSET UNITYSDK_OFFSET(0x1B3B27C0)
#define UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOM_OFFSET UNITYSDK_OFFSET(0x1B3B2A30)
#define UNITYENGINE_UI_INPUTFIELD_SET_ASTERISKCHAR_OFFSET UNITYSDK_OFFSET(0x1B3B2E40)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETBLINKRATE_OFFSET UNITYSDK_OFFSET(0x1B3B1580)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3B1E70)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3B2FB0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B31A0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETSELECTPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3B3050)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3B16C0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1B3B2210)
#define UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B3B2C90)
#define UNITYENGINE_UI_INPUTFIELD_SET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1B3B46F0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B2300)
#define UNITYENGINE_UI_INPUTFIELD_SET_CUSTOMCARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3B1F20)
#define UNITYENGINE_UI_INPUTFIELD_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B28C0)
#define UNITYENGINE_UI_INPUTFIELD_SET_KEYBOARDTYPE_OFFSET UNITYSDK_OFFSET(0x1B3B2B10)
#define UNITYENGINE_UI_INPUTFIELD_SET_LINETYPE_OFFSET UNITYSDK_OFFSET(0x1B3B2570)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1B3B1FC0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x1B3B21B0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B3B20D0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1B3B2050)
#define UNITYENGINE_UI_INPUTFIELD_SET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1B3B1DB0)
#define UNITYENGINE_UI_INPUTFIELD_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1B3B2E10)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B31C0)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3B1F50)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONFOCUSPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3B3250)
#define UNITYENGINE_UI_INPUTFIELD_SET_SHOULDACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x1B3B1060)
#define UNITYENGINE_UI_INPUTFIELD_SET_SHOULDHIDEMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0x1B3B0F80)
#define UNITYENGINE_UI_INPUTFIELD_SET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B3B1790)
#define UNITYENGINE_UI_INPUTFIELD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B3B0EC0)
#define UNITYENGINE_UI_INPUTFIELD_TOUCHSCREENKEYBOARDSHOULDBEUSED_OFFSET UNITYSDK_OFFSET(0x1B3B4700)
#define UNITYENGINE_UI_INPUTFIELD_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B3C0510)
#define UNITYENGINE_UI_INPUTFIELD_UPDATECARETFROMKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1B3B47E0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATECARETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B3B42F0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B3BD6A0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x1B3BB9D0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATETOUCHKEYBOARDFROMEDITCHANGES_OFFSET UNITYSDK_OFFSET(0x1B3B98C0)
#define UNITYENGINE_UI_INPUTFIELD_UTILITY_ONIMEABORT_OFFSET UNITYSDK_OFFSET(0x1B3B0EB0)
#define UNITYENGINE_UI_INPUTFIELD_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B3B63C0)
#define UNITYENGINE_UI_INPUTFIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3C04A0)
#define UNITYENGINE_UI_INPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3B0A60)
#define UNITYENGINE_UI_INPUTFIELD__TRYSENDVALUEFINALCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B3B2160)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_TypeDefinitionIndex = 5895;

	class InputField : public ::UnityEngine::UI::Selectable
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_kSeparators()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(InputField_TypeDefinitionIndex)->GetStaticField(0x46A20);
		}
		// static const ::System::Single kHScrollSpeed; // 0x0
		// static const ::System::Single kVScrollSpeed; // 0x0
		// static const ::System::String* kEmailSpecialCharacters; // 0x0
		// static const ::System::Int32 k_MaxTextLength = 0x3FFE; // 0x0
		::UnityEngine::TouchScreenKeyboard* m_Keyboard; // 0x108
		::UnityEngine::UI::Text* m_TextComponent; // 0x110
		::UnityEngine::UI::Graphic* m_Placeholder; // 0x118
		::UnityEngine::UI::InputField_ContentType m_ContentType; // 0x120
		::UnityEngine::UI::InputField_InputType m_InputType; // 0x124
		::System::Char m_AsteriskChar; // 0x128
		::UnityEngine::TouchScreenKeyboardType m_KeyboardType; // 0x12C
		::UnityEngine::UI::InputField_LineType m_LineType; // 0x130
		::System::Boolean m_HideMobileInput; // 0x134
		::UnityEngine::UI::InputField_CharacterValidation m_CharacterValidation; // 0x138
		::System::Int32 m_CharacterLimit; // 0x13C
		::UnityEngine::UI::InputField_SubmitEvent* m_OnEndEdit; // 0x140
		::UnityEngine::UI::InputField_OnChangeEvent* m_OnValueChanged; // 0x148
		::UnityEngine::UI::InputField_OnValidateInput* m_OnValidateInput; // 0x150
		::UnityEngine::Color m_CaretColor; // 0x158
		::System::Boolean m_CustomCaretColor; // 0x168
		::UnityEngine::Color m_SelectionColor; // 0x16C
		::System::String* m_Text; // 0x180
		::System::Single m_CaretBlinkRate; // 0x188
		::System::Int32 m_CaretWidth; // 0x18C
		::System::Boolean m_ReadOnly; // 0x190
		::System::Boolean m_ShouldActivateOnSelect; // 0x191
		::System::Int32 m_CaretPosition; // 0x194
		::System::Int32 m_CaretSelectPosition; // 0x198
		::UnityEngine::RectTransform* caretRectTrans; // 0x1A0
		::Il2CppArray<::UnityEngine::UIVertex>* m_CursorVerts; // 0x1A8
		::UnityEngine::TextGenerator* m_InputTextCache; // 0x1B0
		::UnityEngine::CanvasRenderer* m_CachedInputRenderer; // 0x1B8
		::System::Boolean m_PreventFontCallback; // 0x1C0
		::UnityEngine::Mesh* m_Mesh; // 0x1C8
		::System::Boolean m_AllowInput; // 0x1D0
		::System::Boolean m_ShouldActivateNextUpdate; // 0x1D1
		::System::Boolean m_UpdateDrag; // 0x1D2
		::System::Boolean m_DragPositionOutOfBounds; // 0x1D3
		::System::Boolean m_CaretVisible; // 0x1D4
		::UnityEngine::Coroutine* m_BlinkCoroutine; // 0x1D8
		::System::Single m_BlinkStartTime; // 0x1E0
		::System::Int32 m_DrawStart; // 0x1E4
		::System::Int32 m_DrawEnd; // 0x1E8
		::UnityEngine::Coroutine* m_DragCoroutine; // 0x1F0
		::System::String* m_OriginalText; // 0x1F8
		::System::Boolean m_WasCanceled; // 0x200
		::System::Boolean m_HasDoneFocusTransition; // 0x201
		::UnityEngine::WaitForSecondsRealtime* m_WaitForSecondsRealtime; // 0x208
		::System::Boolean m_TouchKeyboardAllowsInPlaceEditing; // 0x210
		::UnityEngine::UI::InputField_OnChangeEvent* onValueFinalChanged; // 0x218
		::System::Boolean _IsValueDirty; // 0x220
		::UnityEngine::Event* m_ProcessingEvent; // 0x228
		::System::Boolean m_IsAutoAdaptSize; // 0x230
		::UnityEngine::RectTransform* mRectTransform; // 0x238

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__CCTOR_OFFSET))();
		}

		::UnityEngine::EventSystems::BaseInput* get_input()
		{
			return ((::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_INPUT_OFFSET))(this);
		}

		::System::String* get_compositionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_COMPOSITIONSTRING_OFFSET))(this);
		}

		::System::Void Utility_OnImeAbort(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UTILITY_ONIMEABORT_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_cachedInputTextGenerator()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CACHEDINPUTTEXTGENERATOR_OFFSET))(this);
		}

		::System::Void set_shouldHideMobileInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SHOULDHIDEMOBILEINPUT_OFFSET))(this, a1);
		}

		::System::Boolean get_shouldHideMobileInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SHOULDHIDEMOBILEINPUT_OFFSET))(this);
		}

		::System::Void set_shouldActivateOnSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SHOULDACTIVATEONSELECT_OFFSET))(this, a1);
		}

		::System::Boolean get_shouldActivateOnSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SHOULDACTIVATEONSELECT_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void SetTextWithoutNotify(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTEXTWITHOUTNOTIFY_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTEXT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Single get_caretBlinkRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETBLINKRATE_OFFSET))(this);
		}

		::System::Void set_caretBlinkRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETBLINKRATE_OFFSET))(this, a1);
		}

		::System::Int32 get_caretWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETWIDTH_OFFSET))(this);
		}

		::System::Void set_caretWidth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETWIDTH_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Text* get_textComponent()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TEXTCOMPONENT_OFFSET))(this);
		}

		::System::Void set_textComponent(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_TEXTCOMPONENT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Graphic* get_placeholder()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PLACEHOLDER_OFFSET))(this);
		}

		::System::Void set_placeholder(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_PLACEHOLDER_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_caretColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETCOLOR_OFFSET))(this);
		}

		::System::Void set_caretColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETCOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_customCaretColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CUSTOMCARETCOLOR_OFFSET))(this);
		}

		::System::Void set_customCaretColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CUSTOMCARETCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_selectionColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONCOLOR_OFFSET))(this);
		}

		::System::Void set_selectionColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_SubmitEvent* get_onEndEdit()
		{
			return ((::UnityEngine::UI::InputField_SubmitEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONENDEDIT_OFFSET))(this);
		}

		::System::Void set_onEndEdit(::UnityEngine::UI::InputField_SubmitEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_SubmitEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONENDEDIT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChange()
		{
			return ((::UnityEngine::UI::InputField_OnChangeEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGE_OFFSET))(this);
		}

		::System::Void set_onValueChange(::UnityEngine::UI::InputField_OnChangeEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_OnChangeEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::InputField_OnChangeEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::InputField_OnChangeEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_OnChangeEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void _TrySendValueFinalChangedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__TRYSENDVALUEFINALCHANGEDEVENT_OFFSET))(this);
		}

		::UnityEngine::UI::InputField_OnValidateInput* get_onValidateInput()
		{
			return ((::UnityEngine::UI::InputField_OnValidateInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALIDATEINPUT_OFFSET))(this);
		}

		::System::Void set_onValidateInput(::UnityEngine::UI::InputField_OnValidateInput* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_OnValidateInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALIDATEINPUT_OFFSET))(this, a1);
		}

		::System::Int32 get_characterLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERLIMIT_OFFSET))(this);
		}

		::System::Void set_characterLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERLIMIT_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_ContentType get_contentType()
		{
			return ((::UnityEngine::UI::InputField_ContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_contentType(::UnityEngine::UI::InputField_ContentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_ContentType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_LineType get_lineType()
		{
			return ((::UnityEngine::UI::InputField_LineType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_LINETYPE_OFFSET))(this);
		}

		::System::Void set_lineType(::UnityEngine::UI::InputField_LineType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_LineType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_LINETYPE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_InputType get_inputType()
		{
			return ((::UnityEngine::UI::InputField_InputType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_inputType(::UnityEngine::UI::InputField_InputType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_InputType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_INPUTTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::TouchScreenKeyboard* get_touchScreenKeyboard()
		{
			return ((::UnityEngine::TouchScreenKeyboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TOUCHSCREENKEYBOARD_OFFSET))(this);
		}

		::UnityEngine::TouchScreenKeyboardType get_keyboardType()
		{
			return ((::UnityEngine::TouchScreenKeyboardType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_KEYBOARDTYPE_OFFSET))(this);
		}

		::System::Void set_keyboardType(::UnityEngine::TouchScreenKeyboardType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TouchScreenKeyboardType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_KEYBOARDTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_CharacterValidation get_characterValidation()
		{
			return ((::UnityEngine::UI::InputField_CharacterValidation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERVALIDATION_OFFSET))(this);
		}

		::System::Void set_characterValidation(::UnityEngine::UI::InputField_CharacterValidation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_CharacterValidation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERVALIDATION_OFFSET))(this, a1);
		}

		::System::Boolean get_readOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_READONLY_OFFSET))(this);
		}

		::System::Void set_readOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_READONLY_OFFSET))(this, a1);
		}

		::System::Boolean get_multiLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MULTILINE_OFFSET))(this);
		}

		::System::Char get_asteriskChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ASTERISKCHAR_OFFSET))(this);
		}

		::System::Void set_asteriskChar(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ASTERISKCHAR_OFFSET))(this, a1);
		}

		::System::Boolean get_wasCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_WASCANCELED_OFFSET))(this);
		}

		::System::Void ClampPos(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CLAMPPOS_OFFSET))(this, a1);
		}

		::System::Int32 get_caretPositionInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITIONINTERNAL_OFFSET))(this);
		}

		::System::Void set_caretPositionInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITIONINTERNAL_OFFSET))(this, a1);
		}

		::System::Int32 get_caretSelectPositionInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETSELECTPOSITIONINTERNAL_OFFSET))(this);
		}

		::System::Void set_caretSelectPositionInternal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETSELECTPOSITIONINTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean get_hasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Int32 get_caretPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITION_OFFSET))(this);
		}

		::System::Void set_caretPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_selectionAnchorPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_selectionAnchorPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONANCHORPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_selectionFocusPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONFOCUSPOSITION_OFFSET))(this);
		}

		::System::Void set_selectionFocusPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONFOCUSPOSITION_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CaretBlink()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CARETBLINK_OFFSET))(this);
		}

		::System::Void SetCaretVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETCARETVISIBLE_OFFSET))(this);
		}

		::System::Void SetCaretActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETCARETACTIVE_OFFSET))(this);
		}

		::System::Void UpdateCaretMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATECARETMATERIAL_OFFSET))(this);
		}

		::System::Void OnFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONFOCUS_OFFSET))(this);
		}

		::System::Void SelectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SELECTALL_OFFSET))(this);
		}

		::System::Void MoveTextEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVETEXTEND_OFFSET))(this, a1);
		}

		::System::Void MoveTextStart(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVETEXTSTART_OFFSET))(this, a1);
		}

		static ::System::String* get_clipboard()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CLIPBOARD_OFFSET))();
		}

		static ::System::Void set_clipboard(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CLIPBOARD_OFFSET))(a1);
		}

		::System::Boolean TouchScreenKeyboardShouldBeUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_TOUCHSCREENKEYBOARDSHOULDBEUSED_OFFSET))(this);
		}

		::System::Boolean InPlaceEditing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPLACEEDITING_OFFSET))(this);
		}

		::System::Boolean InPlaceEditingChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPLACEEDITINGCHANGED_OFFSET))(this);
		}

		::System::Void UpdateCaretFromKeyboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATECARETFROMKEYBOARD_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector2 ScreenToLocal(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SCREENTOLOCAL_OFFSET))(this, a1);
		}

		::System::Int32 GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2 a1, ::UnityEngine::TextGenerator* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETUNCLAMPEDCHARACTERLINEFROMPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCharacterIndexFromPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETCHARACTERINDEXFROMPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MAYDRAG_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDRAG_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOUSEDRAGOUTSIDERECT_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::UnityEngine::UI::InputField_EditState KeyPressed(::UnityEngine::Event* a1)
		{
			return ((::UnityEngine::UI::InputField_EditState(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_KEYPRESSED_OFFSET))(this, a1);
		}

		::System::Boolean IsValidChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ISVALIDCHAR_OFFSET))(this, a1);
		}

		::System::Void ProcessEvent(::UnityEngine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_PROCESSEVENT_OFFSET))(this, a1);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::System::String* GetSelectedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETSELECTEDSTRING_OFFSET))(this);
		}

		::System::Int32 FindtNextWordBegin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FINDTNEXTWORDBEGIN_OFFSET))(this);
		}

		::System::Void MoveRight(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVERIGHT_OFFSET))(this, a1, a2);
		}

		::System::Int32 FindtPrevWordBegin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FINDTPREVWORDBEGIN_OFFSET))(this);
		}

		::System::Void MoveLeft(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVELEFT_OFFSET))(this, a1, a2);
		}

		::System::Int32 DetermineCharacterLine(::System::Int32 a1, ::UnityEngine::TextGenerator* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DETERMINECHARACTERLINE_OFFSET))(this, a1, a2);
		}

		::System::Int32 LineUpCharacterPosition(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LINEUPCHARACTERPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Int32 LineDownCharacterPosition(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LINEDOWNCHARACTERPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void MoveDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET))(this, a1);
		}

		::System::Void MoveDown_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_1_OFFSET))(this, a1, a2);
		}

		::System::Void MoveUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET))(this, a1);
		}

		::System::Void MoveUp_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEUP_1_OFFSET))(this, a1, a2);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DELETE_OFFSET))(this);
		}

		::System::Void ForwardSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FORWARDSPACE_OFFSET))(this);
		}

		::System::Void Backspace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_BACKSPACE_OFFSET))(this);
		}

		::System::Void Insert(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INSERT_OFFSET))(this, a1);
		}

		::System::Void UpdateTouchKeyboardFromEditChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATETOUCHKEYBOARDFROMEDITCHANGES_OFFSET))(this);
		}

		::System::Void SendOnValueChangedAndUpdateLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGEDANDUPDATELABEL_OFFSET))(this);
		}

		::System::Void SendOnValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGED_OFFSET))(this);
		}

		::System::Void SendOnSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONSUBMIT_OFFSET))(this);
		}

		::System::Void Append(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET))(this, a1);
		}

		::System::Void Append_1(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_APPEND_1_OFFSET))(this, a1);
		}

		::System::Void UpdateLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATELABEL_OFFSET))(this);
		}

		::System::Boolean IsSelectionVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ISSELECTIONVISIBLE_OFFSET))(this);
		}

		static ::System::Int32 GetLineStartPosition(::UnityEngine::TextGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETLINESTARTPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetLineEndPosition(::UnityEngine::TextGenerator* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETLINEENDPOSITION_OFFSET))(a1, a2);
		}

		::System::Void SetDrawRangeToContainCaretPosition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETDRAWRANGETOCONTAINCARETPOSITION_OFFSET))(this, a1);
		}

		::System::Void ForceLabelUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FORCELABELUPDATE_OFFSET))(this);
		}

		::System::Void MarkGeometryAsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MARKGEOMETRYASDIRTY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_REBUILD_OFFSET))(this, a1);
		}

		::System::Void LayoutComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LAYOUTCOMPLETE_OFFSET))(this);
		}

		::System::Void GraphicUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GRAPHICUPDATECOMPLETE_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void AssignPositioningIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ASSIGNPOSITIONINGIFNEEDED_OFFSET))(this);
		}

		::System::Void OnFillVBO(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONFILLVBO_OFFSET))(this, a1);
		}

		::System::Void GenerateCaret(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GENERATECARET_OFFSET))(this, a1, a2);
		}

		::System::Void CreateCursorVerts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CREATECURSORVERTS_OFFSET))(this);
		}

		::System::Void GenerateHighlight(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GENERATEHIGHLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Char Validate(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ActivateInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void ActivateInputFieldInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELDINTERNAL_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void DeactivateInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DEACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void EnforceContentType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENFORCECONTENTTYPE_OFFSET))(this);
		}

		::System::Void EnforceTextHOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENFORCETEXTHOVERFLOW_OFFSET))(this);
		}

		::System::Void SetToCustomIfContentTypeIsNot(::Il2CppArray<::UnityEngine::UI::InputField_ContentType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UI::InputField_ContentType>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOMIFCONTENTTYPEISNOT_OFFSET))(this, a1);
		}

		::System::Void SetToCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOM_OFFSET))(this);
		}

		::System::Void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_SelectionState, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DOSTATETRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsAutoAdaptSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ISAUTOADAPTSIZE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET))(this);
		}
	};
}
