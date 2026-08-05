#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_Record.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateHistory_RecordHeader.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ADDRECORD_OFFSET UNITYSDK_OFFSET(0x1E783C90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ALLOCATERECORD_OFFSET UNITYSDK_OFFSET(0x1E783D80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1E7845B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E783C70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E784580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E783C00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E783B40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E7844E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GETRECORDUNCHECKED_OFFSET UNITYSDK_OFFSET(0x1E7847F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GETRECORD_OFFSET UNITYSDK_OFFSET(0x1E783560)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_BYTESPERRECORD_OFFSET UNITYSDK_OFFSET(0x1E784790)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x1E783440)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E7831B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_EXTRAMEMORYPERRECORD_OFFSET UNITYSDK_OFFSET(0x1E783280)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x1E7831D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E783460)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_ONRECORDADDED_OFFSET UNITYSDK_OFFSET(0x1E783750)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_ONSHOULDRECORDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1E783770)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1E783330)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E7831C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1E784840)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDINDEXTOUSERINDEX_OFFSET UNITYSDK_OFFSET(0x1E7847D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDSTATECHANGE_1_OFFSET UNITYSDK_OFFSET(0x1E7841C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1E784080)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_EXTRAMEMORYPERRECORD_OFFSET UNITYSDK_OFFSET(0x1E783290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x1E7831E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E783650)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_ONRECORDADDED_OFFSET UNITYSDK_OFFSET(0x1E783760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_ONSHOULDRECORDSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1E783780)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1E7833C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_STARTRECORDING_OFFSET UNITYSDK_OFFSET(0x1E783E20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_STOPRECORDING_OFFSET UNITYSDK_OFFSET(0x1E783F50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E784530)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1E7848F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x1E784A80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_USERINDEXTORECORDINDEX_OFFSET UNITYSDK_OFFSET(0x1E783550)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E783820)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7839C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E783AD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E783790)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateHistory_TypeDefinitionIndex = 32569;

	class InputStateHistory : public ::System::Object
	{
	public:
		// static const ::System::Int32 kDefaultHistorySize = 0x80; // 0x0
		::System::Func_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>* _onShouldRecordStateChange_k__BackingField; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* m_Controls; // 0x18
		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* _onRecordAdded_k__BackingField; // 0x20
		::System::Int32 m_ControlCount; // 0x28
		::System::UInt32 m_CurrentVersion; // 0x2C
		::System::Nullable_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> m_UpdateMask; // 0x30
		::System::Int32 m_ExtraMemoryPerRecord; // 0x38
		::System::Boolean m_AddNewControls; // 0x3C
		::System::Int32 m_HistoryDepth; // 0x40
		::System::Int32 m_RecordCount; // 0x44
		::System::Int32 m_StateSizeInBytes; // 0x48
		::Unity::Collections::NativeArray_1<::System::Byte> m_RecordBuffer; // 0x50
		::System::Int32 m_HeadIndex; // 0x60

		::System::Void _ctor(::System::Int32 maxStateSizeInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_OFFSET))(this, maxStateSizeInBytes);
		}

		::System::Void _ctor_1(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_1_OFFSET))(this, path);
		}

		::System::Void _ctor_2(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_2_OFFSET))(this, control);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* controls)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY__CTOR_3_OFFSET))(this, controls);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_COUNT_OFFSET))(this);
		}

		::System::UInt32 get_version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_VERSION_OFFSET))(this);
		}

		::System::Int32 get_historyDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_HISTORYDEPTH_OFFSET))(this);
		}

		::System::Void set_historyDepth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_HISTORYDEPTH_OFFSET))(this, value);
		}

		::System::Int32 get_extraMemoryPerRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_EXTRAMEMORYPERRECORD_OFFSET))(this);
		}

		::System::Void set_extraMemoryPerRecord(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_EXTRAMEMORYPERRECORD_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdateType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_UPDATEMASK_OFFSET))(this);
		}

		::System::Void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_UPDATEMASK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_controls()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_CONTROLS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record get_Item(::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* get_onRecordAdded()
		{
			return ((::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_ONRECORDADDED_OFFSET))(this);
		}

		::System::Void set_onRecordAdded(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_ONRECORDADDED_OFFSET))(this, value);
		}

		::System::Func_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>* get_onShouldRecordStateChange()
		{
			return ((::System::Func_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_ONSHOULDRECORDSTATECHANGE_OFFSET))(this);
		}

		::System::Void set_onShouldRecordStateChange(::System::Func_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SET_ONSHOULDRECORDSTATECHANGE_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_FINALIZE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_CLEAR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record AddRecord(::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record record)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ADDRECORD_OFFSET))(this, record);
		}

		::System::Void StartRecording()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_STARTRECORDING_OFFSET))(this);
		}

		::System::Void StopRecording()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_STOPRECORDING_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record RecordStateChange(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDSTATECHANGE_OFFSET))(this, control, eventPtr);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record RecordStateChange_1(::UnityEngine::InputSystem::InputControl* control, ::System::Void* statePtr, ::System::Double time)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Void*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDSTATECHANGE_1_OFFSET))(this, control, statePtr, time);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory_Record>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_DISPOSE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_DESTROY_OFFSET))(this);
		}

		::System::Void Allocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ALLOCATE_OFFSET))(this);
		}

		::System::Int32 RecordIndexToUserIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_RECORDINDEXTOUSERINDEX_OFFSET))(this, index);
		}

		::System::Int32 UserIndexToRecordIndex(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_USERINDEXTORECORDINDEX_OFFSET))(this, index);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* GetRecord(::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GETRECORD_OFFSET))(this, index);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* GetRecordUnchecked(::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GETRECORDUNCHECKED_OFFSET))(this, index);
		}

		::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* AllocateRecord(::System::Int32& index)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_ALLOCATERECORD_OFFSET))(this, index);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader* data)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_RecordHeader*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_READVALUEASOBJECT_OFFSET))(this, data);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYCONTROLSTATECHANGED_OFFSET))(this, control, time, eventPtr, monitorIndex);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* control, ::System::Double time, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECHANGEMONITOR_NOTIFYTIMEREXPIRED_OFFSET))(this, control, time, monitorIndex, timerIndex);
		}

		::System::Int32 get_bytesPerRecord()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEHISTORY_GET_BYTESPERRECORD_OFFSET))(this);
		}
	};
}
