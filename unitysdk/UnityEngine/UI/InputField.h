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

#define UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A568AC0)
#define UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1A5734E0)
#define UNITYENGINE_UI_INPUTFIELD_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1A56F360)
#define UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET UNITYSDK_OFFSET(0x1A56F260)
#define UNITYENGINE_UI_INPUTFIELD_ASSIGNPOSITIONINGIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1A569090)
#define UNITYENGINE_UI_INPUTFIELD_BACKSPACE_OFFSET UNITYSDK_OFFSET(0x1A56C510)
#define UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1A573B40)
#define UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1A573B50)
#define UNITYENGINE_UI_INPUTFIELD_CARETBLINK_OFFSET UNITYSDK_OFFSET(0x1A567C20)
#define UNITYENGINE_UI_INPUTFIELD_CLAMPPOS_OFFSET UNITYSDK_OFFSET(0x1A566B40)
#define UNITYENGINE_UI_INPUTFIELD_CREATECURSORVERTS_OFFSET UNITYSDK_OFFSET(0x1A5733B0)
#define UNITYENGINE_UI_INPUTFIELD_DEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1A567910)
#define UNITYENGINE_UI_INPUTFIELD_DELETE_OFFSET UNITYSDK_OFFSET(0x1A56CC40)
#define UNITYENGINE_UI_INPUTFIELD_DETERMINECHARACTERLINE_OFFSET UNITYSDK_OFFSET(0x1A56DDF0)
#define UNITYENGINE_UI_INPUTFIELD_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1A573920)
#define UNITYENGINE_UI_INPUTFIELD_ENFORCECONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A566000)
#define UNITYENGINE_UI_INPUTFIELD_ENFORCETEXTHOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1A564620)
#define UNITYENGINE_UI_INPUTFIELD_FINDTNEXTWORDBEGIN_OFFSET UNITYSDK_OFFSET(0x1A56DB90)
#define UNITYENGINE_UI_INPUTFIELD_FINDTPREVWORDBEGIN_OFFSET UNITYSDK_OFFSET(0x1A56DCD0)
#define UNITYENGINE_UI_INPUTFIELD_FORCELABELUPDATE_OFFSET UNITYSDK_OFFSET(0x1A571260)
#define UNITYENGINE_UI_INPUTFIELD_FORWARDSPACE_OFFSET UNITYSDK_OFFSET(0x1A56C8A0)
#define UNITYENGINE_UI_INPUTFIELD_GENERATECARET_OFFSET UNITYSDK_OFFSET(0x1A571A60)
#define UNITYENGINE_UI_INPUTFIELD_GENERATEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1A572640)
#define UNITYENGINE_UI_INPUTFIELD_GETCHARACTERINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1A56ADA0)
#define UNITYENGINE_UI_INPUTFIELD_GETLINEENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A56B110)
#define UNITYENGINE_UI_INPUTFIELD_GETLINESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1A5710F0)
#define UNITYENGINE_UI_INPUTFIELD_GETSELECTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1A56CB50)
#define UNITYENGINE_UI_INPUTFIELD_GETUNCLAMPEDCHARACTERLINEFROMPOSITION_OFFSET UNITYSDK_OFFSET(0x1A56AB40)
#define UNITYENGINE_UI_INPUTFIELD_GET_ASTERISKCHAR_OFFSET UNITYSDK_OFFSET(0x1A566A80)
#define UNITYENGINE_UI_INPUTFIELD_GET_CACHEDINPUTTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0x1A564720)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETBLINKRATE_OFFSET UNITYSDK_OFFSET(0x1A565360)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565A80)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A566B80)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A566D70)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETSELECTPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A566C20)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETWIDTH_OFFSET UNITYSDK_OFFSET(0x1A565520)
#define UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1A565E50)
#define UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERVALIDATION_OFFSET UNITYSDK_OFFSET(0x1A5668D0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1A568120)
#define UNITYENGINE_UI_INPUTFIELD_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1A564210)
#define UNITYENGINE_UI_INPUTFIELD_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A565F40)
#define UNITYENGINE_UI_INPUTFIELD_GET_CUSTOMCARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565B60)
#define UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A574150)
#define UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1A573E00)
#define UNITYENGINE_UI_INPUTFIELD_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x1A566CC0)
#define UNITYENGINE_UI_INPUTFIELD_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1A566500)
#define UNITYENGINE_UI_INPUTFIELD_GET_INPUT_OFFSET UNITYSDK_OFFSET(0x1A564150)
#define UNITYENGINE_UI_INPUTFIELD_GET_ISAUTOADAPTSIZE_OFFSET UNITYSDK_OFFSET(0x1A574170)
#define UNITYENGINE_UI_INPUTFIELD_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x1A565350)
#define UNITYENGINE_UI_INPUTFIELD_GET_KEYBOARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A566750)
#define UNITYENGINE_UI_INPUTFIELD_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A574160)
#define UNITYENGINE_UI_INPUTFIELD_GET_LINETYPE_OFFSET UNITYSDK_OFFSET(0x1A5661B0)
#define UNITYENGINE_UI_INPUTFIELD_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A573E20)
#define UNITYENGINE_UI_INPUTFIELD_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1A573E30)
#define UNITYENGINE_UI_INPUTFIELD_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1A5646D0)
#define UNITYENGINE_UI_INPUTFIELD_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A573E10)
#define UNITYENGINE_UI_INPUTFIELD_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1A573B60)
#define UNITYENGINE_UI_INPUTFIELD_GET_MULTILINE_OFFSET UNITYSDK_OFFSET(0x1A566A70)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1A565C00)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x1A565DF0)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A565DA0)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1A565C90)
#define UNITYENGINE_UI_INPUTFIELD_GET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1A5659F0)
#define UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1A573E40)
#define UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A573B70)
#define UNITYENGINE_UI_INPUTFIELD_GET_READONLY_OFFSET UNITYSDK_OFFSET(0x1A566A50)
#define UNITYENGINE_UI_INPUTFIELD_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A570E10)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1A566F10)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565B90)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONFOCUSPOSITION_OFFSET UNITYSDK_OFFSET(0x1A566F70)
#define UNITYENGINE_UI_INPUTFIELD_GET_SHOULDACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x1A564870)
#define UNITYENGINE_UI_INPUTFIELD_GET_SHOULDHIDEMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0x1A564820)
#define UNITYENGINE_UI_INPUTFIELD_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A5655F0)
#define UNITYENGINE_UI_INPUTFIELD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A5648A0)
#define UNITYENGINE_UI_INPUTFIELD_GET_TOUCHSCREENKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1A566740)
#define UNITYENGINE_UI_INPUTFIELD_GET_WASCANCELED_OFFSET UNITYSDK_OFFSET(0x1A566B30)
#define UNITYENGINE_UI_INPUTFIELD_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A571930)
#define UNITYENGINE_UI_INPUTFIELD_INPLACEEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1A568230)
#define UNITYENGINE_UI_INPUTFIELD_INPLACEEDITING_OFFSET UNITYSDK_OFFSET(0x1A5681C0)
#define UNITYENGINE_UI_INPUTFIELD_INSERT_OFFSET UNITYSDK_OFFSET(0x1A56EEF0)
#define UNITYENGINE_UI_INPUTFIELD_ISSELECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A570F70)
#define UNITYENGINE_UI_INPUTFIELD_ISVALIDCHAR_OFFSET UNITYSDK_OFFSET(0x1A56D940)
#define UNITYENGINE_UI_INPUTFIELD_KEYPRESSED_OFFSET UNITYSDK_OFFSET(0x1A56BF90)
#define UNITYENGINE_UI_INPUTFIELD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A5683F0)
#define UNITYENGINE_UI_INPUTFIELD_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A571920)
#define UNITYENGINE_UI_INPUTFIELD_LINEDOWNCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A56E4E0)
#define UNITYENGINE_UI_INPUTFIELD_LINEUPCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A56DF20)
#define UNITYENGINE_UI_INPUTFIELD_MARKGEOMETRYASDIRTY_OFFSET UNITYSDK_OFFSET(0x1A5655E0)
#define UNITYENGINE_UI_INPUTFIELD_MAYDRAG_OFFSET UNITYSDK_OFFSET(0x1A56B290)
#define UNITYENGINE_UI_INPUTFIELD_MOUSEDRAGOUTSIDERECT_OFFSET UNITYSDK_OFFSET(0x1A56B970)
#define UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_1_OFFSET UNITYSDK_OFFSET(0x1A56EA20)
#define UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0x1A56D930)
#define UNITYENGINE_UI_INPUTFIELD_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x1A56D4A0)
#define UNITYENGINE_UI_INPUTFIELD_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0x1A56D6E0)
#define UNITYENGINE_UI_INPUTFIELD_MOVETEXTEND_OFFSET UNITYSDK_OFFSET(0x1A567F50)
#define UNITYENGINE_UI_INPUTFIELD_MOVETEXTSTART_OFFSET UNITYSDK_OFFSET(0x1A568020)
#define UNITYENGINE_UI_INPUTFIELD_MOVEUP_1_OFFSET UNITYSDK_OFFSET(0x1A56EC80)
#define UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET UNITYSDK_OFFSET(0x1A56D920)
#define UNITYENGINE_UI_INPUTFIELD_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1A564C30)
#define UNITYENGINE_UI_INPUTFIELD_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1A56B350)
#define UNITYENGINE_UI_INPUTFIELD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1A573760)
#define UNITYENGINE_UI_INPUTFIELD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A567730)
#define UNITYENGINE_UI_INPUTFIELD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A56B420)
#define UNITYENGINE_UI_INPUTFIELD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A566FD0)
#define UNITYENGINE_UI_INPUTFIELD_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1A56B9D0)
#define UNITYENGINE_UI_INPUTFIELD_ONFILLVBO_OFFSET UNITYSDK_OFFSET(0x1A571940)
#define UNITYENGINE_UI_INPUTFIELD_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x1A567E90)
#define UNITYENGINE_UI_INPUTFIELD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A573730)
#define UNITYENGINE_UI_INPUTFIELD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A56BAA0)
#define UNITYENGINE_UI_INPUTFIELD_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1A5735B0)
#define UNITYENGINE_UI_INPUTFIELD_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A5738D0)
#define UNITYENGINE_UI_INPUTFIELD_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A56D9B0)
#define UNITYENGINE_UI_INPUTFIELD_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1A56D9A0)
#define UNITYENGINE_UI_INPUTFIELD_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A571270)
#define UNITYENGINE_UI_INPUTFIELD_SCREENTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1A56A630)
#define UNITYENGINE_UI_INPUTFIELD_SELECTALL_OFFSET UNITYSDK_OFFSET(0x1A567EF0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A56F200)
#define UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGEDANDUPDATELABEL_OFFSET UNITYSDK_OFFSET(0x1A56A5D0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A565300)
#define UNITYENGINE_UI_INPUTFIELD_SETCARETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A565490)
#define UNITYENGINE_UI_INPUTFIELD_SETCARETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A567C80)
#define UNITYENGINE_UI_INPUTFIELD_SETDRAWRANGETOCONTAINCARETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A56FB10)
#define UNITYENGINE_UI_INPUTFIELD_SETTEXTWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A564CC0)
#define UNITYENGINE_UI_INPUTFIELD_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1A5648B0)
#define UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOMIFCONTENTTYPEISNOT_OFFSET UNITYSDK_OFFSET(0x1A566410)
#define UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOM_OFFSET UNITYSDK_OFFSET(0x1A566680)
#define UNITYENGINE_UI_INPUTFIELD_SET_ASTERISKCHAR_OFFSET UNITYSDK_OFFSET(0x1A566A90)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETBLINKRATE_OFFSET UNITYSDK_OFFSET(0x1A565370)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565AC0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A566BE0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A566DD0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETSELECTPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A566C80)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETWIDTH_OFFSET UNITYSDK_OFFSET(0x1A565530)
#define UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1A565E60)
#define UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERVALIDATION_OFFSET UNITYSDK_OFFSET(0x1A5668E0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1A568130)
#define UNITYENGINE_UI_INPUTFIELD_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A565F50)
#define UNITYENGINE_UI_INPUTFIELD_SET_CUSTOMCARETCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565B70)
#define UNITYENGINE_UI_INPUTFIELD_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1A566510)
#define UNITYENGINE_UI_INPUTFIELD_SET_KEYBOARDTYPE_OFFSET UNITYSDK_OFFSET(0x1A566760)
#define UNITYENGINE_UI_INPUTFIELD_SET_LINETYPE_OFFSET UNITYSDK_OFFSET(0x1A5661C0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1A565C10)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x1A565E00)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A565D20)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1A565CA0)
#define UNITYENGINE_UI_INPUTFIELD_SET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0x1A565A00)
#define UNITYENGINE_UI_INPUTFIELD_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1A566A60)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1A566DF0)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1A565BA0)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONFOCUSPOSITION_OFFSET UNITYSDK_OFFSET(0x1A566E80)
#define UNITYENGINE_UI_INPUTFIELD_SET_SHOULDACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x1A564860)
#define UNITYENGINE_UI_INPUTFIELD_SET_SHOULDHIDEMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0x1A564780)
#define UNITYENGINE_UI_INPUTFIELD_SET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A565600)
#define UNITYENGINE_UI_INPUTFIELD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A5646C0)
#define UNITYENGINE_UI_INPUTFIELD_TOUCHSCREENKEYBOARDSHOULDBEUSED_OFFSET UNITYSDK_OFFSET(0x1A568140)
#define UNITYENGINE_UI_INPUTFIELD_UNITYENGINE_UI_ICANVASELEMENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A5741F0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATECARETFROMKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1A568260)
#define UNITYENGINE_UI_INPUTFIELD_UPDATECARETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A567D30)
#define UNITYENGINE_UI_INPUTFIELD_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1A571280)
#define UNITYENGINE_UI_INPUTFIELD_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x1A56F510)
#define UNITYENGINE_UI_INPUTFIELD_UPDATETOUCHKEYBOARDFROMEDITCHANGES_OFFSET UNITYSDK_OFFSET(0x1A56D410)
#define UNITYENGINE_UI_INPUTFIELD_UTILITY_ONIMEABORT_OFFSET UNITYSDK_OFFSET(0x1A5646B0)
#define UNITYENGINE_UI_INPUTFIELD_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1A569ED0)
#define UNITYENGINE_UI_INPUTFIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A574180)
#define UNITYENGINE_UI_INPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A564260)
#define UNITYENGINE_UI_INPUTFIELD__TRYSENDVALUEFINALCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A565DB0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_TypeDefinitionIndex = 5618;

	class InputField : public ::UnityEngine::UI::Selectable
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_kSeparators()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(InputField_TypeDefinitionIndex)->GetStaticField(0x1A0A0);
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

		::System::Void Utility_OnImeAbort(::System::String* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UTILITY_ONIMEABORT_OFFSET))(this, obj);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_cachedInputTextGenerator()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CACHEDINPUTTEXTGENERATOR_OFFSET))(this);
		}

		::System::Void set_shouldHideMobileInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SHOULDHIDEMOBILEINPUT_OFFSET))(this, value);
		}

		::System::Boolean get_shouldHideMobileInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SHOULDHIDEMOBILEINPUT_OFFSET))(this);
		}

		::System::Void set_shouldActivateOnSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SHOULDACTIVATEONSELECT_OFFSET))(this, value);
		}

		::System::Boolean get_shouldActivateOnSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SHOULDACTIVATEONSELECT_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void SetTextWithoutNotify(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTEXTWITHOUTNOTIFY_OFFSET))(this, input);
		}

		::System::Void SetText(::System::String* value, ::System::Boolean sendCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTEXT_OFFSET))(this, value, sendCallback);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Single get_caretBlinkRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETBLINKRATE_OFFSET))(this);
		}

		::System::Void set_caretBlinkRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETBLINKRATE_OFFSET))(this, value);
		}

		::System::Int32 get_caretWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETWIDTH_OFFSET))(this);
		}

		::System::Void set_caretWidth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETWIDTH_OFFSET))(this, value);
		}

		::UnityEngine::UI::Text* get_textComponent()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TEXTCOMPONENT_OFFSET))(this);
		}

		::System::Void set_textComponent(::UnityEngine::UI::Text* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_TEXTCOMPONENT_OFFSET))(this, value);
		}

		::UnityEngine::UI::Graphic* get_placeholder()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PLACEHOLDER_OFFSET))(this);
		}

		::System::Void set_placeholder(::UnityEngine::UI::Graphic* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_PLACEHOLDER_OFFSET))(this, value);
		}

		::UnityEngine::Color get_caretColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETCOLOR_OFFSET))(this);
		}

		::System::Void set_caretColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETCOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_customCaretColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CUSTOMCARETCOLOR_OFFSET))(this);
		}

		::System::Void set_customCaretColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CUSTOMCARETCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_selectionColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONCOLOR_OFFSET))(this);
		}

		::System::Void set_selectionColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_SubmitEvent* get_onEndEdit()
		{
			return ((::UnityEngine::UI::InputField_SubmitEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONENDEDIT_OFFSET))(this);
		}

		::System::Void set_onEndEdit(::UnityEngine::UI::InputField_SubmitEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_SubmitEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONENDEDIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChange()
		{
			return ((::UnityEngine::UI::InputField_OnChangeEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGE_OFFSET))(this);
		}

		::System::Void set_onValueChange(::UnityEngine::UI::InputField_OnChangeEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_OnChangeEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGE_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChanged()
		{
			return ((::UnityEngine::UI::InputField_OnChangeEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_onValueChanged(::UnityEngine::UI::InputField_OnChangeEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_OnChangeEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void _TrySendValueFinalChangedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__TRYSENDVALUEFINALCHANGEDEVENT_OFFSET))(this);
		}

		::UnityEngine::UI::InputField_OnValidateInput* get_onValidateInput()
		{
			return ((::UnityEngine::UI::InputField_OnValidateInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALIDATEINPUT_OFFSET))(this);
		}

		::System::Void set_onValidateInput(::UnityEngine::UI::InputField_OnValidateInput* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_OnValidateInput*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALIDATEINPUT_OFFSET))(this, value);
		}

		::System::Int32 get_characterLimit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERLIMIT_OFFSET))(this);
		}

		::System::Void set_characterLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERLIMIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_ContentType get_contentType()
		{
			return ((::UnityEngine::UI::InputField_ContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_contentType(::UnityEngine::UI::InputField_ContentType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_ContentType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_LineType get_lineType()
		{
			return ((::UnityEngine::UI::InputField_LineType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_LINETYPE_OFFSET))(this);
		}

		::System::Void set_lineType(::UnityEngine::UI::InputField_LineType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_LineType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_LINETYPE_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_InputType get_inputType()
		{
			return ((::UnityEngine::UI::InputField_InputType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_inputType(::UnityEngine::UI::InputField_InputType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_InputType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_INPUTTYPE_OFFSET))(this, value);
		}

		::UnityEngine::TouchScreenKeyboard* get_touchScreenKeyboard()
		{
			return ((::UnityEngine::TouchScreenKeyboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TOUCHSCREENKEYBOARD_OFFSET))(this);
		}

		::UnityEngine::TouchScreenKeyboardType get_keyboardType()
		{
			return ((::UnityEngine::TouchScreenKeyboardType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_KEYBOARDTYPE_OFFSET))(this);
		}

		::System::Void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TouchScreenKeyboardType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_KEYBOARDTYPE_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField_CharacterValidation get_characterValidation()
		{
			return ((::UnityEngine::UI::InputField_CharacterValidation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERVALIDATION_OFFSET))(this);
		}

		::System::Void set_characterValidation(::UnityEngine::UI::InputField_CharacterValidation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField_CharacterValidation))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERVALIDATION_OFFSET))(this, value);
		}

		::System::Boolean get_readOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_READONLY_OFFSET))(this);
		}

		::System::Void set_readOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_READONLY_OFFSET))(this, value);
		}

		::System::Boolean get_multiLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MULTILINE_OFFSET))(this);
		}

		::System::Char get_asteriskChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ASTERISKCHAR_OFFSET))(this);
		}

		::System::Void set_asteriskChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ASTERISKCHAR_OFFSET))(this, value);
		}

		::System::Boolean get_wasCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_WASCANCELED_OFFSET))(this);
		}

		::System::Void ClampPos(::System::Int32& pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CLAMPPOS_OFFSET))(this, pos);
		}

		::System::Int32 get_caretPositionInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITIONINTERNAL_OFFSET))(this);
		}

		::System::Void set_caretPositionInternal(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITIONINTERNAL_OFFSET))(this, value);
		}

		::System::Int32 get_caretSelectPositionInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETSELECTPOSITIONINTERNAL_OFFSET))(this);
		}

		::System::Void set_caretSelectPositionInternal(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETSELECTPOSITIONINTERNAL_OFFSET))(this, value);
		}

		::System::Boolean get_hasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Int32 get_caretPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITION_OFFSET))(this);
		}

		::System::Void set_caretPosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITION_OFFSET))(this, value);
		}

		::System::Int32 get_selectionAnchorPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_selectionAnchorPosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONANCHORPOSITION_OFFSET))(this, value);
		}

		::System::Int32 get_selectionFocusPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONFOCUSPOSITION_OFFSET))(this);
		}

		::System::Void set_selectionFocusPosition(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONFOCUSPOSITION_OFFSET))(this, value);
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

		::System::Void MoveTextEnd(::System::Boolean shift)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVETEXTEND_OFFSET))(this, shift);
		}

		::System::Void MoveTextStart(::System::Boolean shift)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVETEXTSTART_OFFSET))(this, shift);
		}

		static ::System::String* get_clipboard()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CLIPBOARD_OFFSET))();
		}

		static ::System::Void set_clipboard(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CLIPBOARD_OFFSET))(value);
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

		::UnityEngine::Vector2 ScreenToLocal(::UnityEngine::Vector2 screen)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SCREENTOLOCAL_OFFSET))(this, screen);
		}

		::System::Int32 GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2 pos, ::UnityEngine::TextGenerator* generator)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETUNCLAMPEDCHARACTERLINEFROMPOSITION_OFFSET))(this, pos, generator);
		}

		::System::Int32 GetCharacterIndexFromPosition(::UnityEngine::Vector2 pos)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETCHARACTERINDEXFROMPOSITION_OFFSET))(this, pos);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MAYDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOUSEDRAGOUTSIDERECT_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::UnityEngine::UI::InputField_EditState KeyPressed(::UnityEngine::Event* evt)
		{
			return ((::UnityEngine::UI::InputField_EditState(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_KEYPRESSED_OFFSET))(this, evt);
		}

		::System::Boolean IsValidChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ISVALIDCHAR_OFFSET))(this, c);
		}

		::System::Void ProcessEvent(::UnityEngine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_PROCESSEVENT_OFFSET))(this, e);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONUPDATESELECTED_OFFSET))(this, eventData);
		}

		::System::String* GetSelectedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETSELECTEDSTRING_OFFSET))(this);
		}

		::System::Int32 FindtNextWordBegin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FINDTNEXTWORDBEGIN_OFFSET))(this);
		}

		::System::Void MoveRight(::System::Boolean shift, ::System::Boolean ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVERIGHT_OFFSET))(this, shift, ctrl);
		}

		::System::Int32 FindtPrevWordBegin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FINDTPREVWORDBEGIN_OFFSET))(this);
		}

		::System::Void MoveLeft(::System::Boolean shift, ::System::Boolean ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVELEFT_OFFSET))(this, shift, ctrl);
		}

		::System::Int32 DetermineCharacterLine(::System::Int32 charPos, ::UnityEngine::TextGenerator* generator)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::TextGenerator*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DETERMINECHARACTERLINE_OFFSET))(this, charPos, generator);
		}

		::System::Int32 LineUpCharacterPosition(::System::Int32 originalPos, ::System::Boolean goToFirstChar)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LINEUPCHARACTERPOSITION_OFFSET))(this, originalPos, goToFirstChar);
		}

		::System::Int32 LineDownCharacterPosition(::System::Int32 originalPos, ::System::Boolean goToLastChar)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LINEDOWNCHARACTERPOSITION_OFFSET))(this, originalPos, goToLastChar);
		}

		::System::Void MoveDown(::System::Boolean shift)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET))(this, shift);
		}

		::System::Void MoveDown_1(::System::Boolean shift, ::System::Boolean goToLastChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_1_OFFSET))(this, shift, goToLastChar);
		}

		::System::Void MoveUp(::System::Boolean shift)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET))(this, shift);
		}

		::System::Void MoveUp_1(::System::Boolean shift, ::System::Boolean goToFirstChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEUP_1_OFFSET))(this, shift, goToFirstChar);
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

		::System::Void Insert(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INSERT_OFFSET))(this, c);
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

		::System::Void Append(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET))(this, input);
		}

		::System::Void Append_1(::System::Char input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_APPEND_1_OFFSET))(this, input);
		}

		::System::Void UpdateLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATELABEL_OFFSET))(this);
		}

		::System::Boolean IsSelectionVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ISSELECTIONVISIBLE_OFFSET))(this);
		}

		static ::System::Int32 GetLineStartPosition(::UnityEngine::TextGenerator* gen, ::System::Int32 line)
		{
			return ((::System::Int32(*)(::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETLINESTARTPOSITION_OFFSET))(gen, line);
		}

		static ::System::Int32 GetLineEndPosition(::UnityEngine::TextGenerator* gen, ::System::Int32 line)
		{
			return ((::System::Int32(*)(::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETLINEENDPOSITION_OFFSET))(gen, line);
		}

		::System::Void SetDrawRangeToContainCaretPosition(::System::Int32 caretPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETDRAWRANGETOCONTAINCARETPOSITION_OFFSET))(this, caretPos);
		}

		::System::Void ForceLabelUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FORCELABELUPDATE_OFFSET))(this);
		}

		::System::Void MarkGeometryAsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MARKGEOMETRYASDIRTY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_REBUILD_OFFSET))(this, update);
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

		::System::Void OnFillVBO(::UnityEngine::Mesh* vbo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONFILLVBO_OFFSET))(this, vbo);
		}

		::System::Void GenerateCaret(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GENERATECARET_OFFSET))(this, vbo, roundingOffset);
		}

		::System::Void CreateCursorVerts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CREATECURSORVERTS_OFFSET))(this);
		}

		::System::Void GenerateHighlight(::UnityEngine::UI::VertexHelper* vbo, ::UnityEngine::Vector2 roundingOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GENERATEHIGHLIGHT_OFFSET))(this, vbo, roundingOffset);
		}

		::System::Char Validate(::System::String* text, ::System::Int32 pos, ::System::Char ch)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_VALIDATE_OFFSET))(this, text, pos, ch);
		}

		::System::Void ActivateInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void ActivateInputFieldInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELDINTERNAL_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void DeactivateInputField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DEACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void EnforceContentType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENFORCECONTENTTYPE_OFFSET))(this);
		}

		::System::Void EnforceTextHOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENFORCETEXTHOVERFLOW_OFFSET))(this);
		}

		::System::Void SetToCustomIfContentTypeIsNot(::Il2CppArray<::UnityEngine::UI::InputField_ContentType>* allowedContentTypes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UI::InputField_ContentType>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOMIFCONTENTTYPEISNOT_OFFSET))(this, allowedContentTypes);
		}

		::System::Void SetToCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOM_OFFSET))(this);
		}

		::System::Void DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, ::System::Boolean instant)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Selectable_SelectionState, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DOSTATETRANSITION_OFFSET))(this, state, instant);
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
