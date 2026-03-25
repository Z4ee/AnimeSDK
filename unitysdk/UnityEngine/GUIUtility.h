#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FocusType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Event; }
namespace UnityEngine { class GUISkin; }
namespace UnityEngine { class ObjectGUIState; }
namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_GUIUTILITY_BEGINCONTAINERFROMOWNER_OFFSET UNITYSDK_OFFSET(0x18A7FA70)
#define UNITYENGINE_GUIUTILITY_BEGINCONTAINER_OFFSET UNITYSDK_OFFSET(0x18A7FA80)
#define UNITYENGINE_GUIUTILITY_BEGINGUI_OFFSET UNITYSDK_OFFSET(0x18A7FDB0)
#define UNITYENGINE_GUIUTILITY_CHECKFORTABEVENT_OFFSET UNITYSDK_OFFSET(0x18A7FAA0)
#define UNITYENGINE_GUIUTILITY_CHECKONGUI_OFFSET UNITYSDK_OFFSET(0x18A67F10)
#define UNITYENGINE_GUIUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A80140)
#define UNITYENGINE_GUIUTILITY_ENDCONTAINER_OFFSET UNITYSDK_OFFSET(0x18A7FD90)
#define UNITYENGINE_GUIUTILITY_ENDGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A80050)
#define UNITYENGINE_GUIUTILITY_ENDGUI_OFFSET UNITYSDK_OFFSET(0x18A7FF50)
#define UNITYENGINE_GUIUTILITY_EXITGUI_OFFSET UNITYSDK_OFFSET(0x18A7FCD0)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_1_OFFSET UNITYSDK_OFFSET(0x18A72E20)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_2_OFFSET UNITYSDK_OFFSET(0x18A6A350)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A7FA60)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET UNITYSDK_OFFSET(0x18A6A700)
#define UNITYENGINE_GUIUTILITY_GETDEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x18A681C0)
#define UNITYENGINE_GUIUTILITY_GETSTATEOBJECT_OFFSET UNITYSDK_OFFSET(0x18A6B7F0)
#define UNITYENGINE_GUIUTILITY_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x18A6D0B0)
#define UNITYENGINE_GUIUTILITY_GET_GUIDEPTH_OFFSET UNITYSDK_OFFSET(0x18A7FA30)
#define UNITYENGINE_GUIUTILITY_GET_HOTCONTROL_OFFSET UNITYSDK_OFFSET(0x18A6B090)
#define UNITYENGINE_GUIUTILITY_GET_KEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x18A6C8F0)
#define UNITYENGINE_GUIUTILITY_GET_PIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0x18A79790)
#define UNITYENGINE_GUIUTILITY_GET_SYSTEMCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0x18A7FA40)
#define UNITYENGINE_GUIUTILITY_HASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x18A7FAD0)
#define UNITYENGINE_GUIUTILITY_HASKEYFOCUS_OFFSET UNITYSDK_OFFSET(0x18A7EE70)
#define UNITYENGINE_GUIUTILITY_HITTEST_1_OFFSET UNITYSDK_OFFSET(0x18A80270)
#define UNITYENGINE_GUIUTILITY_HITTEST_2_OFFSET UNITYSDK_OFFSET(0x18A6DD30)
#define UNITYENGINE_GUIUTILITY_HITTEST_OFFSET UNITYSDK_OFFSET(0x18A80210)
#define UNITYENGINE_GUIUTILITY_INTERNAL_ENDCONTAINER_OFFSET UNITYSDK_OFFSET(0x18A7FA90)
#define UNITYENGINE_GUIUTILITY_INTERNAL_EXITGUI_OFFSET UNITYSDK_OFFSET(0x18A7FB70)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETDEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x18A7FB60)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETHOTCONTROL_OFFSET UNITYSDK_OFFSET(0x18A7FB20)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x18A7FB30)
#define UNITYENGINE_GUIUTILITY_INTERNAL_SETHOTCONTROL_OFFSET UNITYSDK_OFFSET(0x18A7FB40)
#define UNITYENGINE_GUIUTILITY_INTERNAL_SETKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x18A7FB50)
#define UNITYENGINE_GUIUTILITY_ISEXITGUIEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A801A0)
#define UNITYENGINE_GUIUTILITY_MARKGUICHANGED_OFFSET UNITYSDK_OFFSET(0x18A7FB80)
#define UNITYENGINE_GUIUTILITY_OWNSID_OFFSET UNITYSDK_OFFSET(0x18A7FAE0)
#define UNITYENGINE_GUIUTILITY_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x18A7FD20)
#define UNITYENGINE_GUIUTILITY_REMOVECAPTURE_OFFSET UNITYSDK_OFFSET(0x18A7FC70)
#define UNITYENGINE_GUIUTILITY_RESETGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x18A7FE10)
#define UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOFIRSTCONTROLID_OFFSET UNITYSDK_OFFSET(0x18A7FAB0)
#define UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOLASTCONTROLID_OFFSET UNITYSDK_OFFSET(0x18A7FAC0)
#define UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A7FB10)
#define UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x18A7FAF0)
#define UNITYENGINE_GUIUTILITY_SET_GUIISEXITING_OFFSET UNITYSDK_OFFSET(0x18A7FBE0)
#define UNITYENGINE_GUIUTILITY_SET_HOTCONTROL_OFFSET UNITYSDK_OFFSET(0x18A6B080)
#define UNITYENGINE_GUIUTILITY_SET_KEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x18A6C900)
#define UNITYENGINE_GUIUTILITY_SET_MOUSEUSED_OFFSET UNITYSDK_OFFSET(0x18A6F970)
#define UNITYENGINE_GUIUTILITY_SET_SYSTEMCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0x18A7FA50)
#define UNITYENGINE_GUIUTILITY_SET_TEXTFIELDINPUT_OFFSET UNITYSDK_OFFSET(0x18A6D630)
#define UNITYENGINE_GUIUTILITY_SHOULDRETHROWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A800D0)
#define UNITYENGINE_GUIUTILITY_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x18A7FC10)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIUtility_TypeDefinitionIndex = 5126;

	class GUIUtility : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet_s_HasCurrentWindowKeyFocusFunc()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E40);
		}
		static ::System::Func_3<::System::Int32, ::System::IntPtr, ::System::Boolean>** StaticGet_processEvent()
		{
			return (::System::Func_3<::System::Int32, ::System::IntPtr, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E48);
		}
		static ::System::Func_2<::System::Exception*, ::System::Boolean>** StaticGet_endContainerGUIFromException()
		{
			return (::System::Func_2<::System::Exception*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E50);
		}
		static ::System::Action** StaticGet_cleanupRoots()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E58);
		}
		static ::System::Action** StaticGet_releaseCapture()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E60);
		}
		static ::System::Action** StaticGet_guiChanged()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E68);
		}
		static ::System::Action** StaticGet_takeCapture()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x7E70);
		}
		static ::System::Int32* StaticGet_s_SkinMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x41C0);
		}
		static ::System::Boolean* StaticGet__guiIsExiting_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x41C4);
		}
		static ::System::Int32* StaticGet_s_OriginalID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x41C8);
		}

		static ::System::Single get_pixelsPerPoint()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_PIXELSPERPOINT_OFFSET))();
		}

		static ::System::Int32 get_guiDepth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_GUIDEPTH_OFFSET))();
		}

		static ::System::Void set_mouseUsed(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_MOUSEUSED_OFFSET))(value);
		}

		static ::System::Void set_textFieldInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_TEXTFIELDINPUT_OFFSET))(value);
		}

		static ::System::String* get_systemCopyBuffer()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_SYSTEMCOPYBUFFER_OFFSET))();
		}

		static ::System::Void set_systemCopyBuffer(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_SYSTEMCOPYBUFFER_OFFSET))(value);
		}

		static ::System::Int32 GetControlID(::System::Int32 hint, ::UnityEngine::FocusType focusType, ::UnityEngine::Rect rect)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET))(hint, focusType, rect);
		}

		static ::System::Void BeginContainerFromOwner(::UnityEngine::ScriptableObject* owner)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINCONTAINERFROMOWNER_OFFSET))(owner);
		}

		static ::System::Void BeginContainer(::UnityEngine::ObjectGUIState* objectGUIState)
		{
			return ((::System::Void(*)(::UnityEngine::ObjectGUIState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINCONTAINER_OFFSET))(objectGUIState);
		}

		static ::System::Void Internal_EndContainer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_ENDCONTAINER_OFFSET))();
		}

		static ::System::Int32 CheckForTabEvent(::UnityEngine::Event* evt)
		{
			return ((::System::Int32(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_CHECKFORTABEVENT_OFFSET))(evt);
		}

		static ::System::Void SetKeyboardControlToFirstControlId()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOFIRSTCONTROLID_OFFSET))();
		}

		static ::System::Void SetKeyboardControlToLastControlId()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOLASTCONTROLID_OFFSET))();
		}

		static ::System::Boolean HasFocusableControls()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HASFOCUSABLECONTROLS_OFFSET))();
		}

		static ::System::Boolean OwnsId(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_OWNSID_OFFSET))(id);
		}

		static ::System::String* get_compositionString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_COMPOSITIONSTRING_OFFSET))();
		}

		static ::System::Void set_compositionCursorPos(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_OFFSET))(value);
		}

		static ::System::Int32 Internal_GetHotControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETHOTCONTROL_OFFSET))();
		}

		static ::System::Int32 Internal_GetKeyboardControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETKEYBOARDCONTROL_OFFSET))();
		}

		static ::System::Void Internal_SetHotControl(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_SETHOTCONTROL_OFFSET))(value);
		}

		static ::System::Void Internal_SetKeyboardControl(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_SETKEYBOARDCONTROL_OFFSET))(value);
		}

		static ::System::Object* Internal_GetDefaultSkin(::System::Int32 skinMode)
		{
			return ((::System::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETDEFAULTSKIN_OFFSET))(skinMode);
		}

		static ::System::Void Internal_ExitGUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_EXITGUI_OFFSET))();
		}

		static ::System::Void MarkGUIChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_MARKGUICHANGED_OFFSET))();
		}

		static ::System::Int32 GetControlID_1(::UnityEngine::FocusType focus)
		{
			return ((::System::Int32(*)(::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_1_OFFSET))(focus);
		}

		static ::System::Int32 GetControlID_2(::System::Int32 hint, ::UnityEngine::FocusType focus)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_2_OFFSET))(hint, focus);
		}

		static ::System::Object* GetStateObject(::System::Type* t, ::System::Int32 controlID)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETSTATEOBJECT_OFFSET))(t, controlID);
		}

		static ::System::Void set_guiIsExiting(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_GUIISEXITING_OFFSET))(value);
		}

		static ::System::Int32 get_hotControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_HOTCONTROL_OFFSET))();
		}

		static ::System::Void set_hotControl(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_HOTCONTROL_OFFSET))(value);
		}

		static ::System::Void TakeCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_TAKECAPTURE_OFFSET))();
		}

		static ::System::Void RemoveCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_REMOVECAPTURE_OFFSET))();
		}

		static ::System::Int32 get_keyboardControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_KEYBOARDCONTROL_OFFSET))();
		}

		static ::System::Void set_keyboardControl(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_KEYBOARDCONTROL_OFFSET))(value);
		}

		static ::System::Boolean HasKeyFocus(::System::Int32 controlID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HASKEYFOCUS_OFFSET))(controlID);
		}

		static ::System::Void ExitGUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_EXITGUI_OFFSET))();
		}

		static ::UnityEngine::GUISkin* GetDefaultSkin()
		{
			return ((::UnityEngine::GUISkin*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETDEFAULTSKIN_OFFSET))();
		}

		static ::System::Boolean ProcessEvent(::System::Int32 instanceID, ::System::IntPtr nativeEventPtr)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_PROCESSEVENT_OFFSET))(instanceID, nativeEventPtr);
		}

		static ::System::Void EndContainer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDCONTAINER_OFFSET))();
		}

		static ::System::Void BeginGUI(::System::Int32 skinMode, ::System::Int32 instanceID, ::System::Int32 useGUILayout)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINGUI_OFFSET))(skinMode, instanceID, useGUILayout);
		}

		static ::System::Void EndGUI(::System::Int32 layoutType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDGUI_OFFSET))(layoutType);
		}

		static ::System::Boolean EndGUIFromException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDGUIFROMEXCEPTION_OFFSET))(exception);
		}

		static ::System::Boolean EndContainerGUIFromException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(exception);
		}

		static ::System::Void ResetGlobalState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_RESETGLOBALSTATE_OFFSET))();
		}

		static ::System::Boolean IsExitGUIException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ISEXITGUIEXCEPTION_OFFSET))(exception);
		}

		static ::System::Boolean ShouldRethrowException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SHOULDRETHROWEXCEPTION_OFFSET))(exception);
		}

		static ::System::Void CheckOnGUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_CHECKONGUI_OFFSET))();
		}

		static ::System::Boolean HitTest(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point, ::System::Int32 offset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_OFFSET))(rect, point, offset);
		}

		static ::System::Boolean HitTest_1(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point, ::System::Boolean isDirectManipulationDevice)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_1_OFFSET))(rect, point, isDirectManipulationDevice);
		}

		static ::System::Boolean HitTest_2(::UnityEngine::Rect rect, ::UnityEngine::Event* evt)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_2_OFFSET))(rect, evt);
		}

		static ::System::Int32 GetControlID_Injected(::System::Int32 hint, ::UnityEngine::FocusType focusType, ::UnityEngine::Rect& rect)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_INJECTED_OFFSET))(hint, focusType, rect);
		}

		static ::System::Void set_compositionCursorPos_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(value);
		}
	};
}
