#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/UnityEngine/Animations/ConstraintSource.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5A8F0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1FC5A8E0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC5A830)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5AAD0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC5AA90)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0x1FC5A840)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1FC5AA40)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0x1FC5A7E0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1FC5A800)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x1FC5A820)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5A710)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_OFFSET UNITYSDK_OFFSET(0x1FC5A6C0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONAXIS_OFFSET UNITYSDK_OFFSET(0x1FC5A7C0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5A790)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1FC5A740)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1FC5A6A0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC5A690)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC5AA30)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1FC5A900)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5AB30)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC5AB20)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC5A8D0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0x1FC5A850)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1FC5AAE0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0x1FC5A7F0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1FC5A810)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5A730)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_OFFSET UNITYSDK_OFFSET(0x1FC5A720)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONAXIS_OFFSET UNITYSDK_OFFSET(0x1FC5A7D0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC5A7B0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1FC5A7A0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1FC5A6B0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x1FC5A930)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5A630)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int PositionConstraint_TypeDefinitionIndex = 6699;

	class PositionConstraint : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Animations::PositionConstraint* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::PositionConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_INTERNAL_CREATE_OFFSET))(self);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_WEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_translationAtRest()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_OFFSET))(this);
		}

		::System::Void set_translationAtRest(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_translationOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_OFFSET))(this);
		}

		::System::Void set_translationOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Animations::Axis get_translationAxis()
		{
			return ((::UnityEngine::Animations::Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONAXIS_OFFSET))(this);
		}

		::System::Void set_translationAxis(::UnityEngine::Animations::Axis value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_constraintActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(this);
		}

		::System::Void set_constraintActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_locked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_LOCKED_OFFSET))(this);
		}

		::System::Void set_locked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_LOCKED_OFFSET))(this, value);
		}

		::System::Int32 get_sourceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_SOURCECOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::PositionConstraint* self)
		{
			return ((::System::Int32(*)(::UnityEngine::Animations::PositionConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(self);
		}

		::System::Void GetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCES_OFFSET))(this, sources);
		}

		::System::Void SetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCES_OFFSET))(this, sources);
		}

		static ::System::Void SetSourcesInternal(::UnityEngine::Animations::PositionConstraint* self, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::PositionConstraint*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET))(self, sources);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_OFFSET))(this, source);
		}

		::System::Void RemoveSource(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCE_OFFSET))(this, index);
		}

		::System::Void RemoveSourceInternal(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSource(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCE_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSourceInternal(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET))(this, index);
		}

		::System::Void SetSource(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCE_OFFSET))(this, index, source);
		}

		::System::Void SetSourceInternal(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET))(this, index, source);
		}

		::System::Void ValidateSourceIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(this, index);
		}

		::System::Void get_translationAtRest_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_translationAtRest_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_translationOffset_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_translationOffset_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(this, source);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, source);
		}
	};
}
