#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/UnityEngine/Animations/ConstraintSource.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D280)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1E86D270)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E86D1C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D460)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E86D420)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0x1E86D1D0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1E86D3D0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E86D170)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1E86D190)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D0A0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_OFFSET UNITYSDK_OFFSET(0x1E86D050)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x1E86D150)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D120)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1E86D0D0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x1E86D1B0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E86D030)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E86D020)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E86D3C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1E86D290)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D4C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E86D4B0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E86D260)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0x1E86D1E0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1E86D470)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E86D180)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1E86D1A0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D0C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_OFFSET UNITYSDK_OFFSET(0x1E86D0B0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x1E86D160)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E86D140)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1E86D130)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1E86D040)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x1E86D2C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E86CFC0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int RotationConstraint_TypeDefinitionIndex = 6696;

	class RotationConstraint : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Animations::RotationConstraint* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::RotationConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_INTERNAL_CREATE_OFFSET))(self);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_WEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rotationAtRest()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_OFFSET))(this);
		}

		::System::Void set_rotationAtRest(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rotationOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void set_rotationOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_OFFSET))(this, value);
		}

		::UnityEngine::Animations::Axis get_rotationAxis()
		{
			return ((::UnityEngine::Animations::Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONAXIS_OFFSET))(this);
		}

		::System::Void set_rotationAxis(::UnityEngine::Animations::Axis value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::Axis))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_constraintActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(this);
		}

		::System::Void set_constraintActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_locked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_LOCKED_OFFSET))(this);
		}

		::System::Void set_locked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_LOCKED_OFFSET))(this, value);
		}

		::System::Int32 get_sourceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_SOURCECOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::RotationConstraint* self)
		{
			return ((::System::Int32(*)(::UnityEngine::Animations::RotationConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(self);
		}

		::System::Void GetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCES_OFFSET))(this, sources);
		}

		::System::Void SetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCES_OFFSET))(this, sources);
		}

		static ::System::Void SetSourcesInternal(::UnityEngine::Animations::RotationConstraint* self, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::RotationConstraint*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET))(self, sources);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_OFFSET))(this, source);
		}

		::System::Void RemoveSource(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCE_OFFSET))(this, index);
		}

		::System::Void RemoveSourceInternal(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSource(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCE_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSourceInternal(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET))(this, index);
		}

		::System::Void SetSource(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCE_OFFSET))(this, index, source);
		}

		::System::Void SetSourceInternal(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET))(this, index, source);
		}

		::System::Void ValidateSourceIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(this, index);
		}

		::System::Void get_rotationAtRest_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationAtRest_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationOffset_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationOffset_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(this, source);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, source);
		}
	};
}
