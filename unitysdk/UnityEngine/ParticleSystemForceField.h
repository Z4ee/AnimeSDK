#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ParticleSystemForceFieldShape.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98DB0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x18A98D70)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98E20)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x18A98DE0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98E90)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x18A98E50)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99050)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x18A99010)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x18A98C40)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x18A98C80)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98F00)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x18A98EC0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18A98C60)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18A98D10)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x18A98D30)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98FE0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x18A98FA0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98CD0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x18A98CA0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98F70)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x18A98F30)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18A98C00)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x18A98C20)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99130)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x18A990F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A990C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x18A99080)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x18A98D50)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98DD0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x18A98DC0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98E40)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x18A98E30)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98EB0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x18A98EA0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99070)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x18A99060)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x18A98C50)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x18A98C90)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98F20)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x18A98F10)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x18A98C70)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18A98D20)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x18A98D40)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99000)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x18A98FF0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98D00)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x18A98CE0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A98F90)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x18A98F80)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18A98C10)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x18A98C30)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99150)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x18A99140)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A990E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x18A990D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x18A98D60)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A99160)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemForceField_TypeDefinitionIndex = 5505;

	class ParticleSystemForceField : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemForceFieldShape get_shape()
		{
			return ((::UnityEngine::ParticleSystemForceFieldShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::ParticleSystemForceFieldShape value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceFieldShape))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET))(this, value);
		}

		::System::Single get_startRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET))(this);
		}

		::System::Void set_startRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET))(this, value);
		}

		::System::Single get_endRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET))(this);
		}

		::System::Void set_endRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET))(this, value);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Single get_gravityFocus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET))(this);
		}

		::System::Void set_gravityFocus(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_rotationRandomness()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET))(this);
		}

		::System::Void set_rotationRandomness(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Texture3D* get_vectorField()
		{
			return ((::UnityEngine::Texture3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET))(this);
		}

		::System::Void set_vectorField(::UnityEngine::Texture3D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET))(this);
		}

		::System::Void set_directionX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET))(this);
		}

		::System::Void set_directionY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET))(this);
		}

		::System::Void set_directionZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_gravity()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET))(this);
		}

		::System::Void set_rotationSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET))(this);
		}

		::System::Void set_rotationAttraction(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET))(this);
		}

		::System::Void set_vectorFieldSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET))(this);
		}

		::System::Void set_vectorFieldAttraction(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET))(this, value);
		}

		::System::Void get_rotationRandomness_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationRandomness_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, value);
		}
	};
}
