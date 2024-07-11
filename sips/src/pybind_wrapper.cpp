#include "py_bind_utils/bind_algorithms.hpp"

PYBIND11_MODULE(sips, m) {
    m.doc() = "stochastically inteacting particle systems"; // optional module docstring
    auto m_a = m.def_submodule("algorithms");
    /*----particle wise BRO(with cell lists)----*/
    bind_bro<pariticlewise_bro_clist<2> >(m_a,"ParticlewiseBROCList2D"); // bind class ParticlewiseBroCList2D
    bind_bro<pariticlewise_bro_clist<3> >(m_a,"ParticlewiseBROCList3D"); // bind class ParticlewiseBroCList3D
    bind_bro<pariticlewise_bro_clist<4> >(m_a,"ParticlewiseBROCList4D"); // bind class ParticlewiseBroCList4D
    /*----reciprocal pairwise BRO(with cell lists)----*/
    bind_bro<reciprocal_pairwise_bro_clist<2> >(m_a,"ReciprocalPairwiseBROCList2D"); 
    bind_bro<reciprocal_pairwise_bro_clist<3> >(m_a,"ReciprocalPairwiseBROCList3D"); 
    bind_bro<reciprocal_pairwise_bro_clist<4> >(m_a,"ReciprocalPairwiseBROCList4D"); 
    /*----nonreciprocal pairwise BRO(with cell lists)----*/
    bind_bro<nonreciprocal_pairwise_bro_clist<2> >(m_a,"NonReciprocalPairwiseBROCList2D"); 
    bind_bro<nonreciprocal_pairwise_bro_clist<3> >(m_a,"NonReciprocalPairwiseBROCList3D"); 
    bind_bro<nonreciprocal_pairwise_bro_clist<4> >(m_a,"NonReciprocalPairwiseBROCList4D"); 
    /*----inversepower probabilistic pairwise SGD(with cell lists)----*/
    bind_inversepower_sgd<inversepower_probabilistic_pairwise_sgd_clist<2> >(m_a,"InversePowerProbPairwiseSGDCList2D"); 
    bind_inversepower_sgd<inversepower_probabilistic_pairwise_sgd_clist<3> >(m_a,"InversePowerProbPairwiseSGDCList3D"); 
    bind_inversepower_sgd<inversepower_probabilistic_pairwise_sgd_clist<4> >(m_a,"InversePowerProbPairwiseSGDCList4D");  
    /*----inversepower probabilistic particlewise SGD(with cell lists)----*/
    bind_inversepower_sgd<inversepower_probabilistic_particlewise_sgd_clist<2> >(m_a,"InversePowerProbParticlewiseSGDCList2D"); 
    bind_inversepower_sgd<inversepower_probabilistic_particlewise_sgd_clist<3> >(m_a,"InversePowerProbParticlewiseSGDCList3D"); 
    bind_inversepower_sgd<inversepower_probabilistic_particlewise_sgd_clist<4> >(m_a,"InversePowerProbParticlewiseSGDCList4D"); 
    /*----inversepower particlewise stochastic dynamics (with cell lists)----*/
    bind_inversepower_sd<inversepower_particlewise_sd_clist<2> >(m_a,"InversePowerParticlewiseStoDynCList2D");
    bind_inversepower_sd<inversepower_particlewise_sd_clist<3> >(m_a,"InversePowerParticlewiseStoDynCList3D");
    bind_inversepower_sd<inversepower_particlewise_sd_clist<4> >(m_a,"InversePowerParticlewiseStoDynCList4D");
    /*----inversepower reciprocal pairwise stochastic dynamics (with cell lists)----*/
    bind_inversepower_sd<inversepower_reciprocal_pairwise_sd_clist<2> >(m_a,"InversePowerReciprocalPairwiseStoDynCList2D");
    bind_inversepower_sd<inversepower_reciprocal_pairwise_sd_clist<3> >(m_a,"InversePowerReciprocalPairwiseStoDynCList3D");
    bind_inversepower_sd<inversepower_reciprocal_pairwise_sd_clist<4> >(m_a,"InversePowerReciprocalPairwiseStoDynCList4D");
    /*----inversepower nonreciprocal pairwise stochastic dynamics (with cell lists)----*/
    bind_inversepower_sd<inversepower_nonreciprocal_pairwise_sd_clist<2> >(m_a,"InversePowerNonReciprocalPairwiseStoDynCList2D");
    bind_inversepower_sd<inversepower_nonreciprocal_pairwise_sd_clist<3> >(m_a,"InversePowerNonReciprocalPairwiseStoDynCList3D");
    bind_inversepower_sd<inversepower_nonreciprocal_pairwise_sd_clist<4> >(m_a,"InversePowerNonReciprocalPairwiseStoDynCList4D");
}

