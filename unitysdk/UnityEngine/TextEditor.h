#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextEditor_CharacterType.h"
#include "unitysdk/UnityEngine/TextEditor_DblClickSnapping.h"
#include "unitysdk/UnityEngine/TextEditor_Direction.h"
#include "unitysdk/UnityEngine/TextEditor_TextEditOp.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class TouchScreenKeyboard; }

#define UNITYENGINE_TEXTEDITOR_BACKSPACE_OFFSET UNITYSDK_OFFSET(0x18A87510)
#define UNITYENGINE_TEXTEDITOR_CLAMPTEXTINDEX_OFFSET UNITYSDK_OFFSET(0x18A8A030)
#define UNITYENGINE_TEXTEDITOR_CLASSIFYCHAR_OFFSET UNITYSDK_OFFSET(0x18A88F70)
#define UNITYENGINE_TEXTEDITOR_CLEARCURSORPOS_OFFSET UNITYSDK_OFFSET(0x18A83270)
#define UNITYENGINE_TEXTEDITOR_COPY_OFFSET UNITYSDK_OFFSET(0x18A89D10)
#define UNITYENGINE_TEXTEDITOR_CUT_OFFSET UNITYSDK_OFFSET(0x18A89C90)
#define UNITYENGINE_TEXTEDITOR_DBLCLICKSNAP_OFFSET UNITYSDK_OFFSET(0x18A6CAD0)
#define UNITYENGINE_TEXTEDITOR_DELETELINEBACK_OFFSET UNITYSDK_OFFSET(0x18A86B50)
#define UNITYENGINE_TEXTEDITOR_DELETESELECTION_OFFSET UNITYSDK_OFFSET(0x18A86CC0)
#define UNITYENGINE_TEXTEDITOR_DELETEWORDBACK_OFFSET UNITYSDK_OFFSET(0x18A86E50)
#define UNITYENGINE_TEXTEDITOR_DELETEWORDFORWARD_OFFSET UNITYSDK_OFFSET(0x18A87200)
#define UNITYENGINE_TEXTEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0x18A873F0)
#define UNITYENGINE_TEXTEDITOR_DETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x18A6B910)
#define UNITYENGINE_TEXTEDITOR_DRAWCURSOR_OFFSET UNITYSDK_OFFSET(0x18A6D180)
#define UNITYENGINE_TEXTEDITOR_ENSUREVALIDCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x18A82A80)
#define UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x18A898C0)
#define UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x18A897F0)
#define UNITYENGINE_TEXTEDITOR_FINDENDOFCLASSIFICATION_OFFSET UNITYSDK_OFFSET(0x18A887F0)
#define UNITYENGINE_TEXTEDITOR_FINDENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0x18A86F20)
#define UNITYENGINE_TEXTEDITOR_FINDNEXTSEPERATOR_OFFSET UNITYSDK_OFFSET(0x18A88EE0)
#define UNITYENGINE_TEXTEDITOR_FINDPREVSEPERATOR_OFFSET UNITYSDK_OFFSET(0x18A89020)
#define UNITYENGINE_TEXTEDITOR_FINDSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0x18A87270)
#define UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x18A88230)
#define UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x18A88070)
#define UNITYENGINE_TEXTEDITOR_GET_CURSORINDEX_OFFSET UNITYSDK_OFFSET(0x18A831C0)
#define UNITYENGINE_TEXTEDITOR_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0x18A86CB0)
#define UNITYENGINE_TEXTEDITOR_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18A831B0)
#define UNITYENGINE_TEXTEDITOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18A82B20)
#define UNITYENGINE_TEXTEDITOR_GET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18A83220)
#define UNITYENGINE_TEXTEDITOR_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18A6D000)
#define UNITYENGINE_TEXTEDITOR_GRABGRAPHICALCURSORPOS_OFFSET UNITYSDK_OFFSET(0x18A83500)
#define UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_1_OFFSET UNITYSDK_OFFSET(0x18A835E0)
#define UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_OFFSET UNITYSDK_OFFSET(0x18A6CFF0)
#define UNITYENGINE_TEXTEDITOR_INDEXOFENDOFLINE_OFFSET UNITYSDK_OFFSET(0x18A88430)
#define UNITYENGINE_TEXTEDITOR_INITKEYACTIONS_OFFSET UNITYSDK_OFFSET(0x18A83710)
#define UNITYENGINE_TEXTEDITOR_INSERT_OFFSET UNITYSDK_OFFSET(0x18A6D040)
#define UNITYENGINE_TEXTEDITOR_ISVALIDCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x18A8A070)
#define UNITYENGINE_TEXTEDITOR_MAPKEY_OFFSET UNITYSDK_OFFSET(0x18A89EB0)
#define UNITYENGINE_TEXTEDITOR_MOUSEDRAGSELECTSWHOLEWORDS_OFFSET UNITYSDK_OFFSET(0x18A6CAE0)
#define UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A886F0)
#define UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_OFFSET UNITYSDK_OFFSET(0x18A6C970)
#define UNITYENGINE_TEXTEDITOR_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0x18A87B00)
#define UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x18A881A0)
#define UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x18A87FE0)
#define UNITYENGINE_TEXTEDITOR_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x18A87850)
#define UNITYENGINE_TEXTEDITOR_MOVELINEEND_OFFSET UNITYSDK_OFFSET(0x18A87E90)
#define UNITYENGINE_TEXTEDITOR_MOVELINESTART_OFFSET UNITYSDK_OFFSET(0x18A87D40)
#define UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHBACKWARD_OFFSET UNITYSDK_OFFSET(0x18A885B0)
#define UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHFORWARD_OFFSET UNITYSDK_OFFSET(0x18A884A0)
#define UNITYENGINE_TEXTEDITOR_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0x18A87770)
#define UNITYENGINE_TEXTEDITOR_MOVETEXTEND_OFFSET UNITYSDK_OFFSET(0x18A883A0)
#define UNITYENGINE_TEXTEDITOR_MOVETEXTSTART_OFFSET UNITYSDK_OFFSET(0x18A88330)
#define UNITYENGINE_TEXTEDITOR_MOVETOENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0x18A893C0)
#define UNITYENGINE_TEXTEDITOR_MOVETOSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0x18A89310)
#define UNITYENGINE_TEXTEDITOR_MOVEUP_OFFSET UNITYSDK_OFFSET(0x18A879C0)
#define UNITYENGINE_TEXTEDITOR_MOVEWORDLEFT_OFFSET UNITYSDK_OFFSET(0x18A89530)
#define UNITYENGINE_TEXTEDITOR_MOVEWORDRIGHT_OFFSET UNITYSDK_OFFSET(0x18A89250)
#define UNITYENGINE_TEXTEDITOR_NEXTCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x18A87460)
#define UNITYENGINE_TEXTEDITOR_ONCURSORINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0x18A8A010)
#define UNITYENGINE_TEXTEDITOR_ONDETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x18A89F50)
#define UNITYENGINE_TEXTEDITOR_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x18A833E0)
#define UNITYENGINE_TEXTEDITOR_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x18A834F0)
#define UNITYENGINE_TEXTEDITOR_ONSELECTINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0x18A8A020)
#define UNITYENGINE_TEXTEDITOR_PASTE_OFFSET UNITYSDK_OFFSET(0x18A89D90)
#define UNITYENGINE_TEXTEDITOR_PERFORMOPERATION_OFFSET UNITYSDK_OFFSET(0x18A86480)
#define UNITYENGINE_TEXTEDITOR_PREVIOUSCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x18A87680)
#define UNITYENGINE_TEXTEDITOR_REPLACENEWLINESWITHSPACES_OFFSET UNITYSDK_OFFSET(0x18A89E50)
#define UNITYENGINE_TEXTEDITOR_REPLACESELECTION_OFFSET UNITYSDK_OFFSET(0x18A6D0C0)
#define UNITYENGINE_TEXTEDITOR_SAVEBACKUP_OFFSET UNITYSDK_OFFSET(0x18A6B8A0)
#define UNITYENGINE_TEXTEDITOR_SELECTALL_OFFSET UNITYSDK_OFFSET(0x18A83460)
#define UNITYENGINE_TEXTEDITOR_SELECTCURRENTPARAGRAPH_OFFSET UNITYSDK_OFFSET(0x18A6CB00)
#define UNITYENGINE_TEXTEDITOR_SELECTCURRENTWORD_OFFSET UNITYSDK_OFFSET(0x18A6C9E0)
#define UNITYENGINE_TEXTEDITOR_SELECTDOWN_OFFSET UNITYSDK_OFFSET(0x18A88CB0)
#define UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0x18A899F0)
#define UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0x18A89990)
#define UNITYENGINE_TEXTEDITOR_SELECTLEFT_OFFSET UNITYSDK_OFFSET(0x18A88A10)
#define UNITYENGINE_TEXTEDITOR_SELECTNONE_OFFSET UNITYSDK_OFFSET(0x18A87730)
#define UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHBACKWARD_OFFSET UNITYSDK_OFFSET(0x18A89B60)
#define UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHFORWARD_OFFSET UNITYSDK_OFFSET(0x18A89A50)
#define UNITYENGINE_TEXTEDITOR_SELECTRIGHT_OFFSET UNITYSDK_OFFSET(0x18A88B50)
#define UNITYENGINE_TEXTEDITOR_SELECTTEXTEND_OFFSET UNITYSDK_OFFSET(0x18A88E30)
#define UNITYENGINE_TEXTEDITOR_SELECTTEXTSTART_OFFSET UNITYSDK_OFFSET(0x18A88E90)
#define UNITYENGINE_TEXTEDITOR_SELECTTOENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0x18A894D0)
#define UNITYENGINE_TEXTEDITOR_SELECTTOPOSITION_OFFSET UNITYSDK_OFFSET(0x18A6CC20)
#define UNITYENGINE_TEXTEDITOR_SELECTTOSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0x18A89470)
#define UNITYENGINE_TEXTEDITOR_SELECTUP_OFFSET UNITYSDK_OFFSET(0x18A88C10)
#define UNITYENGINE_TEXTEDITOR_SELECTWORDLEFT_OFFSET UNITYSDK_OFFSET(0x18A896F0)
#define UNITYENGINE_TEXTEDITOR_SELECTWORDRIGHT_OFFSET UNITYSDK_OFFSET(0x18A895F0)
#define UNITYENGINE_TEXTEDITOR_SET_CURSORINDEX_OFFSET UNITYSDK_OFFSET(0x18A831D0)
#define UNITYENGINE_TEXTEDITOR_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18A6B8D0)
#define UNITYENGINE_TEXTEDITOR_SET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18A83230)
#define UNITYENGINE_TEXTEDITOR_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18A6B850)
#define UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSETIFNEEDED_OFFSET UNITYSDK_OFFSET(0x18A6C8A0)
#define UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0x18A82B30)
#define UNITYENGINE_TEXTEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18A83280)

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_TypeDefinitionIndex = 5136;

	class TextEditor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditor_TextEditOp>** StaticGet_s_Keyactions()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditor_TextEditOp>**)Il2CppClass::FromTypeDefinitionIndex(TextEditor_TypeDefinitionIndex)->GetStaticField(0x161D0);
		}
		::UnityEngine::TouchScreenKeyboard* keyboardOnScreen; // 0x10
		::System::Int32 controlID; // 0x18
		::UnityEngine::GUIStyle* style; // 0x20
		::System::Boolean multiline; // 0x28
		::System::Boolean hasHorizontalCursorPos; // 0x29
		::System::Boolean isPasswordField; // 0x2A
		::System::Boolean m_HasFocus; // 0x2B
		::UnityEngine::Vector2 scrollOffset; // 0x2C
		::UnityEngine::GUIContent* m_Content; // 0x38
		::UnityEngine::Rect m_Position; // 0x40
		::System::Int32 m_CursorIndex; // 0x50
		::System::Int32 m_SelectIndex; // 0x54
		::System::Boolean m_RevealCursor; // 0x58
		::UnityEngine::Vector2 graphicalCursorPos; // 0x5C
		::UnityEngine::Vector2 graphicalSelectCursorPos; // 0x64
		::System::Boolean m_MouseDragSelectsWholeWords; // 0x6C
		::System::Int32 m_DblClickInitPos; // 0x70
		::UnityEngine::TextEditor_DblClickSnapping m_DblClickSnap; // 0x74
		::System::Boolean m_bJustSelected; // 0x75
		::System::Int32 m_iAltCursorPos; // 0x78
		::System::String* oldText; // 0x80
		::System::Int32 oldPos; // 0x88
		::System::Int32 oldSelectPos; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR__CTOR_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_TEXT_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_position()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_localPosition()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_LOCALPOSITION_OFFSET))(this);
		}

		::System::Int32 get_cursorIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_CURSORINDEX_OFFSET))(this);
		}

		::System::Void set_cursorIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_CURSORINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_selectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_SELECTINDEX_OFFSET))(this);
		}

		::System::Void set_selectIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_SELECTINDEX_OFFSET))(this, value);
		}

		::System::Void ClearCursorPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLEARCURSORPOS_OFFSET))(this);
		}

		::System::Void OnFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONFOCUS_OFFSET))(this);
		}

		::System::Void OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void GrabGraphicalCursorPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GRABGRAPHICALCURSORPOS_OFFSET))(this);
		}

		::System::Boolean HandleKeyEvent(::UnityEngine::Event* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_OFFSET))(this, e);
		}

		::System::Boolean HandleKeyEvent_1(::UnityEngine::Event* e, ::System::Boolean textIsReadOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Event*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_1_OFFSET))(this, e, textIsReadOnly);
		}

		::System::Boolean DeleteLineBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETELINEBACK_OFFSET))(this);
		}

		::System::Boolean DeleteWordBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETEWORDBACK_OFFSET))(this);
		}

		::System::Boolean DeleteWordForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETEWORDFORWARD_OFFSET))(this);
		}

		::System::Boolean Delete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETE_OFFSET))(this);
		}

		::System::Boolean Backspace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_BACKSPACE_OFFSET))(this);
		}

		::System::Void SelectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTALL_OFFSET))(this);
		}

		::System::Void SelectNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTNONE_OFFSET))(this);
		}

		::System::Boolean get_hasSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_HASSELECTION_OFFSET))(this);
		}

		::System::Boolean DeleteSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETESELECTION_OFFSET))(this);
		}

		::System::Void ReplaceSelection(::System::String* replace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_REPLACESELECTION_OFFSET))(this, replace);
		}

		::System::Void Insert(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INSERT_OFFSET))(this, c);
		}

		::System::Void MoveRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVERIGHT_OFFSET))(this);
		}

		::System::Void MoveLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELEFT_OFFSET))(this);
		}

		::System::Void MoveUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEUP_OFFSET))(this);
		}

		::System::Void MoveDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEDOWN_OFFSET))(this);
		}

		::System::Void MoveLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELINESTART_OFFSET))(this);
		}

		::System::Void MoveLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELINEEND_OFFSET))(this);
		}

		::System::Void MoveGraphicalLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINESTART_OFFSET))(this);
		}

		::System::Void MoveGraphicalLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINEEND_OFFSET))(this);
		}

		::System::Void MoveTextStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETEXTSTART_OFFSET))(this);
		}

		::System::Void MoveTextEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETEXTEND_OFFSET))(this);
		}

		::System::Int32 IndexOfEndOfLine(::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INDEXOFENDOFLINE_OFFSET))(this, startIndex);
		}

		::System::Void MoveParagraphForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHFORWARD_OFFSET))(this);
		}

		::System::Void MoveParagraphBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHBACKWARD_OFFSET))(this);
		}

		::System::Void MoveCursorToPosition(::UnityEngine::Vector2 cursorPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_OFFSET))(this, cursorPosition);
		}

		::System::Void MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, ::System::Boolean shift)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_INTERNAL_OFFSET))(this, cursorPosition, shift);
		}

		::System::Void SelectToPosition(::UnityEngine::Vector2 cursorPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOPOSITION_OFFSET))(this, cursorPosition);
		}

		::System::Void SelectLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTLEFT_OFFSET))(this);
		}

		::System::Void SelectRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTRIGHT_OFFSET))(this);
		}

		::System::Void SelectUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTUP_OFFSET))(this);
		}

		::System::Void SelectDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTDOWN_OFFSET))(this);
		}

		::System::Void SelectTextEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTEXTEND_OFFSET))(this);
		}

		::System::Void SelectTextStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTEXTSTART_OFFSET))(this);
		}

		::System::Void MouseDragSelectsWholeWords(::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOUSEDRAGSELECTSWHOLEWORDS_OFFSET))(this, on);
		}

		::System::Void DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping snapping)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextEditor_DblClickSnapping))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DBLCLICKSNAP_OFFSET))(this, snapping);
		}

		::System::Int32 GetGraphicalLineStart(::System::Int32 p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINESTART_OFFSET))(this, p);
		}

		::System::Int32 GetGraphicalLineEnd(::System::Int32 p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINEEND_OFFSET))(this, p);
		}

		::System::Int32 FindNextSeperator(::System::Int32 startPos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDNEXTSEPERATOR_OFFSET))(this, startPos);
		}

		::System::Int32 FindPrevSeperator(::System::Int32 startPos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDPREVSEPERATOR_OFFSET))(this, startPos);
		}

		::System::Void MoveWordRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEWORDRIGHT_OFFSET))(this);
		}

		::System::Void MoveToStartOfNextWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETOSTARTOFNEXTWORD_OFFSET))(this);
		}

		::System::Void MoveToEndOfPreviousWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETOENDOFPREVIOUSWORD_OFFSET))(this);
		}

		::System::Void SelectToStartOfNextWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOSTARTOFNEXTWORD_OFFSET))(this);
		}

		::System::Void SelectToEndOfPreviousWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOENDOFPREVIOUSWORD_OFFSET))(this);
		}

		::UnityEngine::TextEditor_CharacterType ClassifyChar(::System::Int32 index)
		{
			return ((::UnityEngine::TextEditor_CharacterType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLASSIFYCHAR_OFFSET))(this, index);
		}

		::System::Int32 FindStartOfNextWord(::System::Int32 p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDSTARTOFNEXTWORD_OFFSET))(this, p);
		}

		::System::Int32 FindEndOfPreviousWord(::System::Int32 p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDENDOFPREVIOUSWORD_OFFSET))(this, p);
		}

		::System::Void MoveWordLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEWORDLEFT_OFFSET))(this);
		}

		::System::Void SelectWordRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTWORDRIGHT_OFFSET))(this);
		}

		::System::Void SelectWordLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTWORDLEFT_OFFSET))(this);
		}

		::System::Void ExpandSelectGraphicalLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINESTART_OFFSET))(this);
		}

		::System::Void ExpandSelectGraphicalLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINEEND_OFFSET))(this);
		}

		::System::Void SelectGraphicalLineStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINESTART_OFFSET))(this);
		}

		::System::Void SelectGraphicalLineEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINEEND_OFFSET))(this);
		}

		::System::Void SelectParagraphForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHFORWARD_OFFSET))(this);
		}

		::System::Void SelectParagraphBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHBACKWARD_OFFSET))(this);
		}

		::System::Void SelectCurrentWord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTCURRENTWORD_OFFSET))(this);
		}

		::System::Int32 FindEndOfClassification(::System::Int32 p, ::UnityEngine::TextEditor_Direction dir)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::TextEditor_Direction))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDENDOFCLASSIFICATION_OFFSET))(this, p, dir);
		}

		::System::Void SelectCurrentParagraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTCURRENTPARAGRAPH_OFFSET))(this);
		}

		::System::Void UpdateScrollOffsetIfNeeded(::UnityEngine::Event* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSETIFNEEDED_OFFSET))(this, evt);
		}

		::System::Void UpdateScrollOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSET_OFFSET))(this);
		}

		::System::Void DrawCursor(::System::String* newText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DRAWCURSOR_OFFSET))(this, newText);
		}

		::System::Boolean PerformOperation(::UnityEngine::TextEditor_TextEditOp operation, ::System::Boolean textIsReadOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextEditor_TextEditOp, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PERFORMOPERATION_OFFSET))(this, operation, textIsReadOnly);
		}

		::System::Void SaveBackup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SAVEBACKUP_OFFSET))(this);
		}

		::System::Boolean Cut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CUT_OFFSET))(this);
		}

		::System::Void Copy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_COPY_OFFSET))(this);
		}

		static ::System::String* ReplaceNewlinesWithSpaces(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_REPLACENEWLINESWITHSPACES_OFFSET))(value);
		}

		::System::Boolean Paste()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PASTE_OFFSET))(this);
		}

		static ::System::Void MapKey(::System::String* key, ::UnityEngine::TextEditor_TextEditOp action)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::TextEditor_TextEditOp))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MAPKEY_OFFSET))(key, action);
		}

		::System::Void InitKeyActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INITKEYACTIONS_OFFSET))(this);
		}

		::System::Void DetectFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DETECTFOCUSCHANGE_OFFSET))(this);
		}

		::System::Void OnDetectFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONDETECTFOCUSCHANGE_OFFSET))(this);
		}

		::System::Void OnCursorIndexChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONCURSORINDEXCHANGE_OFFSET))(this);
		}

		::System::Void OnSelectIndexChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONSELECTINDEXCHANGE_OFFSET))(this);
		}

		::System::Void ClampTextIndex(::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLAMPTEXTINDEX_OFFSET))(this, index);
		}

		::System::Void EnsureValidCodePointIndex(::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ENSUREVALIDCODEPOINTINDEX_OFFSET))(this, index);
		}

		::System::Boolean IsValidCodePointIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ISVALIDCODEPOINTINDEX_OFFSET))(this, index);
		}

		::System::Int32 PreviousCodePointIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PREVIOUSCODEPOINTINDEX_OFFSET))(this, index);
		}

		::System::Int32 NextCodePointIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_NEXTCODEPOINTINDEX_OFFSET))(this, index);
		}
	};
}
