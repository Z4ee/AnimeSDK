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

#define UNITYENGINE_GUIUTILITY_ALIGNRECTTODEVICE_1_OFFSET UNITYSDK_OFFSET(0x1B2F5B70)
#define UNITYENGINE_GUIUTILITY_ALIGNRECTTODEVICE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B308200)
#define UNITYENGINE_GUIUTILITY_ALIGNRECTTODEVICE_OFFSET UNITYSDK_OFFSET(0x1B3081C0)
#define UNITYENGINE_GUIUTILITY_BEGINCONTAINERFROMOWNER_OFFSET UNITYSDK_OFFSET(0x1B308140)
#define UNITYENGINE_GUIUTILITY_BEGINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B308150)
#define UNITYENGINE_GUIUTILITY_BEGINGUI_OFFSET UNITYSDK_OFFSET(0x1B308420)
#define UNITYENGINE_GUIUTILITY_CHECKFORTABEVENT_OFFSET UNITYSDK_OFFSET(0x1B308170)
#define UNITYENGINE_GUIUTILITY_CHECKONGUI_OFFSET UNITYSDK_OFFSET(0x1B2EE400)
#define UNITYENGINE_GUIUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B308760)
#define UNITYENGINE_GUIUTILITY_ENDCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B308400)
#define UNITYENGINE_GUIUTILITY_ENDGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B308670)
#define UNITYENGINE_GUIUTILITY_ENDGUI_OFFSET UNITYSDK_OFFSET(0x1B308570)
#define UNITYENGINE_GUIUTILITY_EXITGUI_OFFSET UNITYSDK_OFFSET(0x1B308380)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_1_OFFSET UNITYSDK_OFFSET(0x1B2FBC10)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_2_OFFSET UNITYSDK_OFFSET(0x1B2F0940)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B308130)
#define UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET UNITYSDK_OFFSET(0x1B2F0CD0)
#define UNITYENGINE_GUIUTILITY_GETDEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1B2EE690)
#define UNITYENGINE_GUIUTILITY_GETSTATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2F1DA0)
#define UNITYENGINE_GUIUTILITY_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x1B2F3650)
#define UNITYENGINE_GUIUTILITY_GET_GUIDEPTH_OFFSET UNITYSDK_OFFSET(0x1B308100)
#define UNITYENGINE_GUIUTILITY_GET_HOTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B2F1660)
#define UNITYENGINE_GUIUTILITY_GET_KEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x1B2F2E90)
#define UNITYENGINE_GUIUTILITY_GET_PIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0x1B301D10)
#define UNITYENGINE_GUIUTILITY_GET_SYSTEMCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0x1B308110)
#define UNITYENGINE_GUIUTILITY_GUITOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x1B308800)
#define UNITYENGINE_GUIUTILITY_HASFOCUSABLECONTROLS_OFFSET UNITYSDK_OFFSET(0x1B3081A0)
#define UNITYENGINE_GUIUTILITY_HASKEYFOCUS_OFFSET UNITYSDK_OFFSET(0x1B3075A0)
#define UNITYENGINE_GUIUTILITY_HITTEST_1_OFFSET UNITYSDK_OFFSET(0x1B3088B0)
#define UNITYENGINE_GUIUTILITY_HITTEST_2_OFFSET UNITYSDK_OFFSET(0x1B2F54A0)
#define UNITYENGINE_GUIUTILITY_HITTEST_OFFSET UNITYSDK_OFFSET(0x1B308850)
#define UNITYENGINE_GUIUTILITY_INTERNALWINDOWTOSCREENPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3082D0)
#define UNITYENGINE_GUIUTILITY_INTERNALWINDOWTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x1B3082A0)
#define UNITYENGINE_GUIUTILITY_INTERNAL_ENDCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B308160)
#define UNITYENGINE_GUIUTILITY_INTERNAL_EXITGUI_OFFSET UNITYSDK_OFFSET(0x1B308290)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETDEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1B308280)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETHOTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B308240)
#define UNITYENGINE_GUIUTILITY_INTERNAL_GETKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x1B308250)
#define UNITYENGINE_GUIUTILITY_INTERNAL_SETHOTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B308260)
#define UNITYENGINE_GUIUTILITY_INTERNAL_SETKEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x1B308270)
#define UNITYENGINE_GUIUTILITY_ISEXITGUIEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B308790)
#define UNITYENGINE_GUIUTILITY_MARKGUICHANGED_OFFSET UNITYSDK_OFFSET(0x1B3082E0)
#define UNITYENGINE_GUIUTILITY_OWNSID_OFFSET UNITYSDK_OFFSET(0x1B3081B0)
#define UNITYENGINE_GUIUTILITY_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x1B3083D0)
#define UNITYENGINE_GUIUTILITY_REMOVECAPTURE_OFFSET UNITYSDK_OFFSET(0x1B308350)
#define UNITYENGINE_GUIUTILITY_RESETGLOBALSTATE_OFFSET UNITYSDK_OFFSET(0x1B308460)
#define UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOFIRSTCONTROLID_OFFSET UNITYSDK_OFFSET(0x1B308180)
#define UNITYENGINE_GUIUTILITY_SETKEYBOARDCONTROLTOLASTCONTROLID_OFFSET UNITYSDK_OFFSET(0x1B308190)
#define UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B308230)
#define UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0x1B308210)
#define UNITYENGINE_GUIUTILITY_SET_GUIISEXITING_OFFSET UNITYSDK_OFFSET(0x1B308310)
#define UNITYENGINE_GUIUTILITY_SET_HOTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B2F1650)
#define UNITYENGINE_GUIUTILITY_SET_KEYBOARDCONTROL_OFFSET UNITYSDK_OFFSET(0x1B2F2EA0)
#define UNITYENGINE_GUIUTILITY_SET_MOUSEUSED_OFFSET UNITYSDK_OFFSET(0x1B2F5B30)
#define UNITYENGINE_GUIUTILITY_SET_SYSTEMCOPYBUFFER_OFFSET UNITYSDK_OFFSET(0x1B308120)
#define UNITYENGINE_GUIUTILITY_SET_TEXTFIELDINPUT_OFFSET UNITYSDK_OFFSET(0x1B2F3BD0)
#define UNITYENGINE_GUIUTILITY_SHOULDRETHROWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B3086F0)
#define UNITYENGINE_GUIUTILITY_TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0x1B308320)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIUtility_TypeDefinitionIndex = 5230;

	class GUIUtility : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_cleanupRoots()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2940);
		}
		static ::System::Func_3<::System::Int32, ::System::IntPtr, ::System::Boolean>** StaticGet_processEvent()
		{
			return (::System::Func_3<::System::Int32, ::System::IntPtr, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2948);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet_s_HasCurrentWindowKeyFocusFunc()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2950);
		}
		static ::System::Action** StaticGet_takeCapture()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2958);
		}
		static ::System::Action** StaticGet_releaseCapture()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2960);
		}
		static ::System::Action** StaticGet_guiChanged()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2968);
		}
		static ::System::Func_2<::System::Exception*, ::System::Boolean>** StaticGet_endContainerGUIFromException()
		{
			return (::System::Func_2<::System::Exception*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x2970);
		}
		static ::System::Int32* StaticGet_s_SkinMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x10A0);
		}
		static ::System::Int32* StaticGet_s_OriginalID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x10A4);
		}
		static ::System::Boolean* StaticGet__guiIsExiting_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GUIUtility_TypeDefinitionIndex)->GetStaticField(0x10A8);
		}

		static ::System::Single get_pixelsPerPoint()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_PIXELSPERPOINT_OFFSET))();
		}

		static ::System::Int32 get_guiDepth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_GUIDEPTH_OFFSET))();
		}

		static ::System::Void set_mouseUsed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_MOUSEUSED_OFFSET))(a1);
		}

		static ::System::Void set_textFieldInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_TEXTFIELDINPUT_OFFSET))(a1);
		}

		static ::System::String* get_systemCopyBuffer()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_SYSTEMCOPYBUFFER_OFFSET))();
		}

		static ::System::Void set_systemCopyBuffer(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_SYSTEMCOPYBUFFER_OFFSET))(a1);
		}

		static ::System::Int32 GetControlID(::System::Int32 a1, ::UnityEngine::FocusType a2, ::UnityEngine::Rect a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BeginContainerFromOwner(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINCONTAINERFROMOWNER_OFFSET))(a1);
		}

		static ::System::Void BeginContainer(::UnityEngine::ObjectGUIState* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ObjectGUIState*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINCONTAINER_OFFSET))(a1);
		}

		static ::System::Void Internal_EndContainer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_ENDCONTAINER_OFFSET))();
		}

		static ::System::Int32 CheckForTabEvent(::UnityEngine::Event* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_CHECKFORTABEVENT_OFFSET))(a1);
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

		static ::System::Boolean OwnsId(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_OWNSID_OFFSET))(a1);
		}

		static ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ALIGNRECTTODEVICE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* get_compositionString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_COMPOSITIONSTRING_OFFSET))();
		}

		static ::System::Void set_compositionCursorPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_OFFSET))(a1);
		}

		static ::System::Int32 Internal_GetHotControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETHOTCONTROL_OFFSET))();
		}

		static ::System::Int32 Internal_GetKeyboardControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETKEYBOARDCONTROL_OFFSET))();
		}

		static ::System::Void Internal_SetHotControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_SETHOTCONTROL_OFFSET))(a1);
		}

		static ::System::Void Internal_SetKeyboardControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_SETKEYBOARDCONTROL_OFFSET))(a1);
		}

		static ::System::Object* Internal_GetDefaultSkin(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_GETDEFAULTSKIN_OFFSET))(a1);
		}

		static ::System::Void Internal_ExitGUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNAL_EXITGUI_OFFSET))();
		}

		static ::UnityEngine::Vector2 InternalWindowToScreenPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNALWINDOWTOSCREENPOINT_OFFSET))(a1);
		}

		static ::System::Void MarkGUIChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_MARKGUICHANGED_OFFSET))();
		}

		static ::System::Int32 GetControlID_1(::UnityEngine::FocusType a1)
		{
			return ((::System::Int32(*)(::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_1_OFFSET))(a1);
		}

		static ::System::Int32 GetControlID_2(::System::Int32 a1, ::UnityEngine::FocusType a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_2_OFFSET))(a1, a2);
		}

		static ::System::Object* GetStateObject(::System::Type* a1, ::System::Int32 a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETSTATEOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void set_guiIsExiting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_GUIISEXITING_OFFSET))(a1);
		}

		static ::System::Int32 get_hotControl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GET_HOTCONTROL_OFFSET))();
		}

		static ::System::Void set_hotControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_HOTCONTROL_OFFSET))(a1);
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

		static ::System::Void set_keyboardControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_KEYBOARDCONTROL_OFFSET))(a1);
		}

		static ::System::Boolean HasKeyFocus(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HASKEYFOCUS_OFFSET))(a1);
		}

		static ::System::Void ExitGUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_EXITGUI_OFFSET))();
		}

		static ::UnityEngine::GUISkin* GetDefaultSkin()
		{
			return ((::UnityEngine::GUISkin*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETDEFAULTSKIN_OFFSET))();
		}

		static ::System::Boolean ProcessEvent(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_PROCESSEVENT_OFFSET))(a1, a2);
		}

		static ::System::Void EndContainer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDCONTAINER_OFFSET))();
		}

		static ::System::Void BeginGUI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_BEGINGUI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EndGUI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDGUI_OFFSET))(a1);
		}

		static ::System::Boolean EndGUIFromException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDGUIFROMEXCEPTION_OFFSET))(a1);
		}

		static ::System::Boolean EndContainerGUIFromException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ResetGlobalState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_RESETGLOBALSTATE_OFFSET))();
		}

		static ::System::Boolean IsExitGUIException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ISEXITGUIEXCEPTION_OFFSET))(a1);
		}

		static ::System::Boolean ShouldRethrowException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SHOULDRETHROWEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void CheckOnGUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_CHECKONGUI_OFFSET))();
		}

		static ::UnityEngine::Vector2 GUIToScreenPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GUITOSCREENPOINT_OFFSET))(a1);
		}

		static ::UnityEngine::Rect AlignRectToDevice_1(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ALIGNRECTTODEVICE_1_OFFSET))(a1);
		}

		static ::System::Boolean HitTest(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HitTest_1(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HitTest_2(::UnityEngine::Rect a1, ::UnityEngine::Event* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_HITTEST_2_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetControlID_Injected(::System::Int32 a1, ::UnityEngine::FocusType a2, ::UnityEngine::Rect& a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::FocusType, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_GETCONTROLID_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AlignRectToDevice_Injected(::UnityEngine::Rect& a1, ::System::Int32& a2, ::System::Int32& a3, ::UnityEngine::Rect& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Rect&, ::System::Int32&, ::System::Int32&, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_ALIGNRECTTODEVICE_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void set_compositionCursorPos_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void InternalWindowToScreenPoint_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIUTILITY_INTERNALWINDOWTOSCREENPOINT_INJECTED_OFFSET))(a1, a2);
		}
	};
}
