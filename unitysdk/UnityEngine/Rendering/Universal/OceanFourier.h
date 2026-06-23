#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_BITREVERSE_OFFSET UNITYSDK_OFFSET(0x1BC347E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_COMPUTEBUTTERFLYLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1BC34000)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_DISPERSION_OFFSET UNITYSDK_OFFSET(0x1BC34540)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_EVALUATEWAVESFFT_OFFSET UNITYSDK_OFFSET(0x1BC35E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_FFT_1_OFFSET UNITYSDK_OFFSET(0x1BC34990)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_FFT_OFFSET UNITYSDK_OFFSET(0x1BC34870)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_GAUSSIANRANDOMVARIABLE_OFFSET UNITYSDK_OFFSET(0x1BC359A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_GETSPECTRUM_OFFSET UNITYSDK_OFFSET(0x1BC34630)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_INITSPECTRUM_OFFSET UNITYSDK_OFFSET(0x1BC35CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_PEFORMFFT_OFFSET UNITYSDK_OFFSET(0x1BC34A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_PHILLIPSSPECTRUM_OFFSET UNITYSDK_OFFSET(0x1BC35AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x1BC369F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1BC33040)
#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC36AB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OceanFourier_TypeDefinitionIndex = 26300;

	class OceanFourier : public ::System::Object
	{
	public:
		// static const ::System::Single GRAVITY; // 0x0
		::Il2CppArray<::System::Single>* m_butterflyLookupTable; // 0x10
		::Il2CppArray<::UnityEngine::Vector4>* m_displacementBuffer; // 0x18
		::Il2CppArray<::UnityEngine::Vector2>* m_spectrum_conj; // 0x20
		::Il2CppArray<::UnityEngine::Vector2>* m_spectrum; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* m_slopeBuffer; // 0x30
		::Il2CppArray<::System::Single>* m_jacobian; // 0x38
		::Il2CppArray<::System::Single>* m_dispersionTable; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* m_positionOffset; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* m_normals; // 0x50
		::Il2CppArray<::UnityEngine::Vector2>* m_heightBuffer; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* m_vertices; // 0x60
		::Il2CppArray<::UnityEngine::Vector3>* m_originPosition; // 0x68
		::System::Single m_fsize; // 0x70
		::UnityEngine::Vector2 m_windDir; // 0x74
		::System::Single m_waveAmp; // 0x7C
		::System::Int32 m_size; // 0x80
		::System::Int32 m_passes; // 0x84
		::System::Single m_windSpeed; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER__CTOR_OFFSET))(this);
		}

		::System::Void SetData(::System::Int32 passes, ::System::Single waveAmp, ::UnityEngine::Vector2 windDir, ::System::Single windSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_SETDATA_OFFSET))(this, passes, waveAmp, windDir, windSpeed);
		}

		::System::Int32 BitReverse(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_BITREVERSE_OFFSET))(this, i);
		}

		::System::Void ComputeButterflyLookupTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_COMPUTEBUTTERFLYLOOKUPTABLE_OFFSET))(this);
		}

		::UnityEngine::Vector4 FFT(::UnityEngine::Vector2 w, ::UnityEngine::Vector4 input1, ::UnityEngine::Vector4 input2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_FFT_OFFSET))(this, w, input1, input2);
		}

		::UnityEngine::Vector2 FFT_1(::UnityEngine::Vector2 w, ::UnityEngine::Vector2 input1, ::UnityEngine::Vector2 input2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_FFT_1_OFFSET))(this, w, input1, input2);
		}

		::System::Int32 PeformFFT(::System::Int32 startIdx, ::Il2CppArray<::UnityEngine::Vector2>* data0, ::Il2CppArray<::UnityEngine::Vector4>* data1, ::Il2CppArray<::UnityEngine::Vector4>* data2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_PEFORMFFT_OFFSET))(this, startIdx, data0, data1, data2);
		}

		::UnityEngine::Vector2 GetSpectrum(::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_GETSPECTRUM_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector2 GaussianRandomVariable()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_GAUSSIANRANDOMVARIABLE_OFFSET))(this);
		}

		::System::Single PhillipsSpectrum(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_PHILLIPSSPECTRUM_OFFSET))(this, x, y);
		}

		::System::Single Dispersion(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_DISPERSION_OFFSET))(this, x, y);
		}

		::UnityEngine::Vector2 InitSpectrum(::System::Single t, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_INITSPECTRUM_OFFSET))(this, t, x, y);
		}

		::System::Void EvaluateWavesFFT(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_EVALUATEWAVESFFT_OFFSET))(this, t);
		}

		::System::Void Sample(::System::Single t, ::Il2CppArray<::UnityEngine::Vector3>*& positions, ::Il2CppArray<::UnityEngine::Vector3>*& offsets, ::Il2CppArray<::UnityEngine::Vector3>*& normals, ::Il2CppArray<::System::Single>*& jacobian)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFOURIER_SAMPLE_OFFSET))(this, t, positions, offsets, normals, jacobian);
		}
	};
}
